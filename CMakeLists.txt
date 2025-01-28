cmake_minimum_required(VERSION 3.12)

project(algorithms-visualization)

set(SOURCES
    src/main.cpp
    src/BubbleSort.cpp
    src/MergeSort.cpp
    src/QuickSort.cpp
    src/SortingAlgorithm.cpp
)

set(CMAKE_CXX_STANDARD 17)

add_library(glad STATIC dependencies/glad/src/glad.c)

include_directories(dependencies/glad/include)

include_directories(include)

add_executable(AlgorithmVisualizer ${SOURCES})

target_link_libraries(AlgorithmVisualizer glad glfw GL dl pthread X11)

add_subdirectory(tests)