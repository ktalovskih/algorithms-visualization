add_executable(TEST test.cpp)

add_subdirectory(${CMAKE_SOURCE_DIR}/dependencies/gtest googletest-build)

target_link_libraries(TEST gtest gtest_main)

add_test(NAME MyTests COMMAND run_tests)
