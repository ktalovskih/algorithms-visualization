# Create the test executable
add_executable(TEST test.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

# Ensure the test executable can access include/ and src/
target_include_directories(TEST PRIVATE ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/src)

FetchContent_MakeAvailable(googletest)
# Link Google Test
target_link_libraries(TEST PRIVATE gtest_main)

# Enable testing
enable_testing()
include(GoogleTest)
gtest_discover_tests(TEST)
