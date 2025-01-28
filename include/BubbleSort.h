#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_
#include "SortingAlgorithm.h"
template <typename T>
class BubbleSort : public SortingAlgorithm<T>
{
private:
    int i;
    int j;
public:
    explicit BubbleSort(const std::vector<T>& arr);

    void sort() override;

    bool isComplecte() const;

    void clearIndices();
};

template <typename T>
inline BubbleSort<T>::BubbleSort(const std::vector<T>& _arr) : SortingAlgorithm<T>(_arr), i(0), j(0)  // присвоил значение для переменных ибо цикл сортировки не запускалсяу меня
{

}

template <typename T>
inline void BubbleSort<T>::sort()
{
    if (i < this->arr.size()) {
        if (j < this->arr.size() - i - 1) {  // отнимаю единицу, потому что на последней итерации, я так понимаю, происходит выход за границы массива и в итоге вместо 67 получаю 0
            if (this->arr[j] > this->arr[j + 1]) {
                std::swap(this->arr[j], this->arr[j + 1]);
            }
            ++j;
        } else {
            j = 0;
            ++i;
        }
    }
}
//используется для проверки того ли i не равно ли концу array, eсли равен, то можно считать, что он отсиртированный 
template <typename T>
inline bool BubbleSort<T>::isComplecte() const
{
    return i >=  this->arr.size();
}

template <typename T>
void BubbleSort<T>::clearIndices(){  // без очиски следующий вызов сортировки не пройдет, запихнуть очиску в isComplecte не выйшло - бесконечный цикл
    this->i = 0;
    this->j = 0;
}

#endif // BUBBLESORT_H_
