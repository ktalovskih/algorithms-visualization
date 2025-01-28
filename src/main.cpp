#include <glad/glad.h>  // Include GLAD to load OpenGL functions
#include <GLFW/glfw3.h> // Include GLFW for window and input management
#include <iostream>
#include "BubbleSort.h"

int main() {

    std::vector<int> arr1 = {-1,2,-3,4,-5,67,-7};

    BubbleSort<int> bl(arr1);

    auto arr = bl.getArray();

    for (auto element : arr){
        std::cout << element << " ";
    }
    std::cout << "\n\n";
    
    arr = bl.getArray();

    while(!bl.isComplecte()){
        bl.sort();

        for (auto& num : bl.getArray()) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    bl.clearIndices();
    

    std::cout << "\nвторой вызов\n\n";    
    std::vector<int> arr2 = {3, 1, 5, 2, -3, 89, 4, 54, 12, 23, 32, 15};
    bl.setNewVector(arr2);

    arr = arr2;

    for (auto element : arr){
        std::cout << element << " ";
    }
    std::cout << "\n\n";

    while(!bl.isComplecte()){
        bl.sort();

        for (auto& num : bl.getArray()) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    bl.clearIndices();


    // glfwInit();

    // glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);
    // glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
    // glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);

    // auto window =  glfwCreateWindow(800,800, "asd", nullptr,nullptr);
    // glfwMakeContextCurrent(window);

    // gladLoadGL();

    // glViewport(0,0,800,800);

    // glClearColor(0.07f,0.13f,0.17f,1.0f);
    // glClear(GL_COLOR_BUFFER_BIT);
    // glfwSwapBuffers(window);

    // while (!glfwWindowShouldClose(window)){
    //     glfwPollEvents();
    // }

    // glfwDestroyWindow(window);
    // glfwTerminate();
    return 0;

}
