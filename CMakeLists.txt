cmake_minimum_required(VERSION 3.15)

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

project(ddsc VERSION 1 LANGUAGES C CXX)

# dds头文件

set(FASTDDS_HEAD ${PROJECT_SOURCE_DIR}/fastdds_include)
set(DDS_HEAD ${PROJECT_SOURCE_DIR}/include)

include_directories(${FASTDDS_HEAD})
include_directories(${DDS_HEAD})

file(GLOB_RECURSE SRC_C "${PROJECT_SOURCE_DIR}/src/*.c")
file(GLOB_RECURSE SRC_CPP "${PROJECT_SOURCE_DIR}/src/*.cpp")
file(GLOB_RECURSE SRC_CXX "${PROJECT_SOURCE_DIR}/src/*.cxx")

# 库生成的路径
set(LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)

# 测试程序生成路径
set(EXEC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)


#lib 文件
if(${ARCHITECTURE} STREQUAL "arm64")
# 必须库
set(LIBDDS ${PROJECT_SOURCE_DIR}/lib_arm64/libdds.so)
set(LIBCRYPTO ${PROJECT_SOURCE_DIR}/lib_arm64/libcrypto.so.3)
set(LIBSSL ${PROJECT_SOURCE_DIR}/lib_arm64/libssl.so.3)
#Gtest
set(LIBGMOCK ${PROJECT_SOURCE_DIR}/lib_arm64/libgmock.a)
set(LIBGMOCKMAIN ${PROJECT_SOURCE_DIR}/lib_arm64/libgmockmain.a)
set(LIBGTEST ${PROJECT_SOURCE_DIR}/lib_arm64/libgtest.a)
set(LIBGTESTMAIN ${PROJECT_SOURCE_DIR}/lib_arm64/libgtestmain.a)
else()
# 必须库
set(LIBDDS ${PROJECT_SOURCE_DIR}/lib_x86/libdds.so)
set(LIBCRYPTO ${PROJECT_SOURCE_DIR}/lib_x86/libcrypto.so.3)
set(LIBSSL ${PROJECT_SOURCE_DIR}/lib_x86/libssl.so.3)
#Gtest
set(LIBGMOCK ${PROJECT_SOURCE_DIR}/lib_x86/libgmock.a)
set(LIBGMOCKMAIN ${PROJECT_SOURCE_DIR}/lib_x86/libgmockmain.a)
set(LIBGTEST ${PROJECT_SOURCE_DIR}/lib_x86/libgtest.a)
set(LIBGTESTMAIN ${PROJECT_SOURCE_DIR}/lib_x86/libgtestmain.a)
endif()

add_library(${PROJECT_NAME} SHARED ${SRC_C} ${SRC_CXX} ${SRC_CPP})

target_compile_definitions(${PROJECT_NAME} PRIVATE
    $<$<AND:$<NOT:$<BOOL:${WIN32}>>,$<STREQUAL:"${CMAKE_BUILD_TYPE}","Debug">>:__DEBUG>
    $<$<BOOL:${INTERNAL_DEBUG}>:__INTERNALDEBUG> # Internal debug activated.
)

target_link_libraries(${PROJECT_NAME} ${LIBDDS} ${LIBCRYPTO} ${LIBSSL} pthread -lrt -ldl)



# 添加子目录
add_subdirectory(test)