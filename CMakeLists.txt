cmake_minimum_required(VERSION 3.12)
project(algorithms-visualization)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    src/main.cpp
    src/BubbleSort.cpp
    src/MergeSort.cpp
    src/QuickSort.cpp
    src/SortingAlgorithm.cpp
)

include(FetchContent)

FetchContent_Declare(
  glfw
  URL https://github.com/glfw/glfw/archive/refs/tags/3.3.8.zip
)
FetchContent_MakeAvailable(glfw)

FetchContent_Declare(
  glad
  URL https://github.com/Dav1dde/glad/archive/refs/tags/v0.1.36.zip
)
FetchContent_MakeAvailable(glad)

target_include_directories(glad PUBLIC ${glad_SOURCE_DIR}/include)

add_executable(AlgorithmVisualizer ${SOURCES})

target_include_directories(AlgorithmVisualizer PRIVATE include)

target_link_libraries(AlgorithmVisualizer PRIVATE glad glfw)

if(UNIX AND NOT APPLE)
    target_link_libraries(AlgorithmVisualizer PRIVATE dl pthread X11)
endif()

add_subdirectory(tests)
