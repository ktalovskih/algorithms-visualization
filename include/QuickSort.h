#ifndef QUICKSORT_H_
#define QUICKSORT_H_
#include "SortingAlgorithm.h"

template<typename T>

class QuickSort : public SortingAlgorithm<T>
{
private:

public:
    explicit QuickSort(const std::vector<T>& arr);

    void sort() override;

    void quickSort(std::vector<T>& arr, int low, int high); //метод самой сортировки еще не придумал как сделать сортировку "по шагам"

    const int partition(std::vector<T>& arr1, int low, int high) const; //метод нужен для работы quickSort метода
};

template <typename T>
inline QuickSort<T>::QuickSort(const std::vector<T> &_arr) : SortingAlgorithm<T>(_arr)
{
    
}

template <typename T>
inline void QuickSort<T>::sort()
{
    quickSort(this->arr,0,this->arr.size()-1);
}

template <typename T>
inline void QuickSort<T>::quickSort(std::vector<T>& arr, int low, int high)
{
    if (low < high) {
        int pivot = partition(arr,low,high);

        quickSort(arr,low, pivot-1);
        quickSort(arr,pivot+1, high);
    }
}

template <typename T>
inline const int QuickSort<T>::partition(std::vector<T> &arr, int low, int high) const
{
    int pivot = arr[high];

    int j = low -1;

    for (int i = low; i <= high -1;i++){
        if (arr[i] < pivot){
            j++;
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[j + 1],arr[high]);
    return j + 1;
}

#endif // QUICKSORT_H_


