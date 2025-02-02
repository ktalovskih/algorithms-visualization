#include <glad/glad.h>  
#include <GLFW/glfw3.h> 
#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "MergeSort.h"


int main() {

    // quick

    // std::vector<int> data = {3,2,5,0,1,8,7,6,9,4};
    
    // QuickSort<int> sorter(data);
    // sorter.sort();

    // for (auto& i : data){
    //     std::cout << i << " ";
    // }

    // std::cout << "\n\n";
    
    // for(auto& vec : sorter.getChronology()){
    //     for(auto& i : vec){
    //         std::cout << i << " ";
    //     }
    //     std::cout << "\n";
    // }

    // std::cout << "\n\n";

    // // bubble

    // std::vector<int> arr1 = {3,2,5,0,1,8,7,6,9,4};

    // BubbleSort<int> bl(arr1);

    // auto arr = bl.getArray();

    // for (auto element : arr){
    //     std::cout << element << " ";
    // }
    
    // arr = bl.getArray();

    // while(!bl.isComplecte()){
    //     bl.sort();
    // }
    // bl.clearIndices();

    // std::cout << "\n\n";
    // for(auto& vec : bl.getChronology()){
    //     for(auto& i : vec){
    //         std::cout << i << " ";
    //     }
    //     std::cout << "\n";
    // }

    // std::cout << "\n";

    // merge

    std::vector<int> arr2 = {3,2,5,0,1,8,7,6,9,4};

    // почитал в wiki что такое merge sort и попробовал сделать его
    // надеюсь что это то что нужно НО НЕ УВЕРЕН НА СТО ПРОЦ
    // есть проблема - я еще не придумал пока что как записать хронологию для этой сортировки

    MergeSort ms(arr2);

    for(auto& el : ms.getArray()){
        std::cout << el << " ";
    }
    std::cout << "\n\n";

    ms.sort();

    for(auto& el : ms.getArray()){
        std::cout << el << " ";
    }
    std::cout << "\n\n";

    return 0;
}

//---------------------------------------------------------------------------//

    // std::vector<int> arr1 = {3,2,5,0,1,8,7,6,9,4};

    // BubbleSort<int> bl(arr1);

    // auto arr = bl.getArray();

    // for (auto element : arr){
    //     std::cout << element << " ";
    // }
    // std::cout << "\n\n";
    
    // arr = bl.getArray();

    // while(!bl.isComplecte()){
    //     bl.sort();

    //     for (auto& num : bl.getArray()) {
    //         std::cout << num << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // bl.clearIndices();
    

    // std::cout << "\nвторой вызов\n\n";    
    // std::vector<int> arr2 = {3, 1, 5, 2, -3, 89, 4, 54, 12, 23, 32, 15};
    // bl.setNewVector(arr2);

    // arr = arr2;

    // for (auto element : arr){
    //     std::cout << element << " ";
    // }
    // std::cout << "\n\n";

    // while(!bl.isComplecte()){
    //     bl.sort();

    //     for (auto& num : bl.getArray()) {
    //         std::cout << num << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // bl.clearIndices();

//---------------------------------------------------------------------------//openGL
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
