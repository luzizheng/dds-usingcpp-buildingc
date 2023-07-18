
cmake_minimum_required(VERSION 3.15)

# 目标文件类型 APP LIB 
set(BTYPE APP)

# 编译架构：x86 arm64
set(ARCHITECTURE x86)


if(${ARCHITECTURE} STREQUAL "arm64")
message(STATUS "this is arm64 compiler")
# 交叉编译arm64
set(CMAKE_CXX_COMPILER /opt/gnu-arch64/bin/aarch64-linux-gnu-g++)
set(CMAKE_C_COMPILER /opt/gnu-arch64/bin/aarch64-linux-gnu-gcc)
# 告诉cmake是进行交叉编译
set(CMAKE_CROSSCOMPILING TRUE) 
else()
message(STATUS "this is x86_64 compiler")
set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_C_COMPILER /usr/bin/gcc)
set(CMAKE_CROSSCOMPILING FALSE) 
endif()

set(CMAKE_SYSTEM_NAME "Linux")


# set(CMAKE_POSITION_INDEPENDENT_CODE ON)

if(${BTYPE} STREQUAL "APP")
project(ddsexample VERSION 1 LANGUAGES C CXX)
elseif(${BTYPE} STREQUAL "LIB")
project(ddsc VERSION 1 LANGUAGES C CXX)
endif()


# dds头文件
include_directories(${PROJECT_SOURCE_DIR}/third_include)
include_directories(${PROJECT_SOURCE_DIR}/include)


file(GLOB_RECURSE SRC_C "${PROJECT_SOURCE_DIR}/src/*.c")
file(GLOB_RECURSE SRC_CPP "${PROJECT_SOURCE_DIR}/src/*.cpp")
file(GLOB_RECURSE SRC_CXX "${PROJECT_SOURCE_DIR}/src/*.cxx")


#lib 文件
if(${ARCHITECTURE} STREQUAL "arm64")
# link_directories(${PROJECT_SOURCE_DIR}/lib_arm64)
else()
# link_directories(${PROJECT_SOURCE_DIR}/lib_x86)
set(LIBDDS ${PROJECT_SOURCE_DIR}/lib_x86/libdds.so)
set(LIBCRYPTO ${PROJECT_SOURCE_DIR}/lib_x86/libcrypto.so.3)
set(LIBSSL ${PROJECT_SOURCE_DIR}/lib_x86/libssl.so.3)
endif()



if(${BTYPE} STREQUAL "APP")
add_executable(${PROJECT_NAME} ${SRC_C} ${SRC_CXX} ${SRC_CPP})
elseif(${BTYPE} STREQUAL "LIB")
add_library(${PROJECT_NAME} SHARED ${SRC_C} ${SRC_CXX} ${SRC_CPP})
endif()




target_compile_definitions(${PROJECT_NAME} PRIVATE
    $<$<AND:$<NOT:$<BOOL:${WIN32}>>,$<STREQUAL:"${CMAKE_BUILD_TYPE}","Debug">>:__DEBUG>
    $<$<BOOL:${INTERNAL_DEBUG}>:__INTERNALDEBUG> # Internal debug activated.
)

target_link_libraries(${PROJECT_NAME} ${LIBDDS} ${LIBCRYPTO} ${LIBSSL} pthread -lrt -ldl)
