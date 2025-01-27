project(algorithms-visualization)

cmake_minimum_required(VERSION 3.12)

set(SOURCES
    src/main.cpp
    src/BubbleSort.cpp
    src/MergeSort.cpp
    src/QuickSort.cpp
    src/SortingAlgorithm.cpp
)

set(CMAKE_CXX_STANDARD 17)

# Add GLAD
add_library(glad STATIC dependencies/glad/src/glad.c)
include_directories(dependencies/glad/include)

# Include directories
include_directories(include)

# Add executable
add_executable(AlgorithmVisualizer ${SOURCES})

# Link libraries
target_link_libraries(AlgorithmVisualizer glad glfw GL dl pthread X11)
