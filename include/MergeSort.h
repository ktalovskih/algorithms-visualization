#ifndef MERGESORT_H_
#define MERGESORT_H_

#include "SortingAlgorithm.h"

template <typename T>
class MergeSort : public SortingAlgorithm<T>{
public:
    explicit MergeSort(const std::vector<T>& arr);

    void sort() override;

    std::vector<std::vector<T>> split(std::vector<T>& arr);

    std::vector<T> mergeSort(std::vector<T>& arrLeft, std::vector<T>& arrRight);
};

template <typename T>
inline MergeSort<T>::MergeSort(const std::vector<T>& arr) : SortingAlgorithm<T>(arr){}

template <typename T>
void MergeSort<T>::sort(){
    if(this->arr.size() > 1){
        std::vector<std::vector<T>> twoHalves = split(this->arr);

        this->arr = mergeSort(twoHalves[0], twoHalves[1]);
    }
}

template <typename T>
std::vector<T> MergeSort<T>::mergeSort(std::vector<T>& arrLeft, std::vector<T>& arrRight){
    if(arrLeft.size() > 1) {
        std::vector<std::vector<T>> twoHalves = split(arrLeft);

        arrLeft = mergeSort(twoHalves[0], twoHalves[1]);
    }
    if(arrRight.size() > 1){
        std::vector<std::vector<T>> twoHalves = split(arrRight);

        arrRight = mergeSort(twoHalves[0], twoHalves[1]);
    }

    std::vector<T> newArr;
    int i = 0, j = 0;

    while(i < arrLeft.size() && j < arrRight.size()){
        if(arrLeft[i] < arrRight[j]) newArr.push_back(arrLeft[i++]);
        else newArr.push_back(arrRight[j++]);
    }

    while(i < arrLeft.size()) newArr.push_back(arrLeft[i++]);
    while(j < arrRight.size()) newArr.push_back(arrRight[j++]);

    return newArr;
}

template <typename T>
std::vector<std::vector<T>> MergeSort<T>::split(std::vector<T>& arr){
    int size = arr.size();

    std::vector<T> arrLeft(arr.begin(), arr.begin() + size / 2);
    std::vector<T> arrRight(arr.begin() + size / 2, arr.end());

    std::vector<std::vector<T>> result = {arrLeft, arrRight};
    
    return result;
}



#endif