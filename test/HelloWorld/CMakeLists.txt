cmake_minimum_required(VERSION 3.15)

project(helloworld VERSION 1 LANGUAGES C CXX)

aux_source_directory(./ SRC)

include_directories(${FASTDDS_HEAD})
include_directories(${DDS_HEAD})

link_libraries(${LIBDDS} ${LIBCRYPTO} ${LIBSSL} pthread -lrt -ldl)

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})


add_executable(helloworld ${SRC} ${SRC_C} ${SRC_CXX} ${SRC_CPP})