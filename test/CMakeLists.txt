macro(add_xfail_label LIST_FILE)
    if(GTEST_INDIVIDUAL AND EXISTS ${LIST_FILE})
        file(STRINGS ${LIST_FILE} TEST_LIST)

        foreach(XFAIL_TEST ${TEST_LIST})
            set_property(TEST ${XFAIL_TEST} PROPERTY LABELS xfail)
        endforeach()
    endif()
endmacro()

add_subdirectory(ctest)
# add_subdirectory(configuration)

# add_subdirectory(latency)
# add_subdirectory(throughput)

# add_subdirectory(unittest)
# add_subdirectory(blackbox)




