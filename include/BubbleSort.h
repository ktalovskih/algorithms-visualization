#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_
#include "SortingAlgorithm.h"
template <typename T>
class BubbleSort : public SortingAlgorithm<T>
{
private:
    //size_t n = this->arr * this->arr;
    int i;
    int j;
public:
    explicit BubbleSort(const std::vector<T>& arr);

    void sort() override;

    bool isComplecte() const;
};

template <typename T>
inline BubbleSort<T>::BubbleSort(const std::vector<T>& _arr) : SortingAlgorithm<T>(_arr)
{

}

template <typename T>
inline void BubbleSort<T>::sort()
{
    if (i < this->arr.size()) {
        if (j < this->arr.size() - i ) {
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

#endif // BUBBLESORT_H_

