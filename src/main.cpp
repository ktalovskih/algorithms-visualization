#include <glad/glad.h>  
#include <GLFW/glfw3.h> 
#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"


int main() {

    std::vector<int> data = {3,2,5,0,1,8,7,6,9,4};
    
    QuickSort<int> sorter(data);
    sorter.sort();

    for (auto& i : sorter.getArray()){
        std::cout << i << " ";
    }
    
    //крч сделал я этот квик сорт, но хз как придумать, также как на том, сайте
    //тип чтоб можно было по шагам это отслеживать, пока идей нет. Сам его вроде как понял, но изза рекурсии
    //я хз как мне вызывать, manually итерацию типа)
    //и с мерджем будет, что-то подобное, там тоже рекурсия.
    //я ниче не комментировал, думаю тут и так понятно че я делал
    
    //заебался завтра сяду еще подумаю.

    //В итоге че сделано:
    //Добавлено. GoogleTest
    //Написаны unit тесты для bubblesort.h 
    //Типо сделан QuickSort, но не до конца.
    //как запустить тест - автоматически создается бинарник TEST в директории build/tests/TEST. 
    //может почитаешь, насчет тестов, там не особо сложно, но так впадлу их мне было писать, поэтому нейросеть

    return 0;

}

//---------------------------------------------------------------------------//

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
