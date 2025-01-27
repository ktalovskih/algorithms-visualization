#ifndef SORTINGALGORITHM_H_
#define SORTINGALGORITHM_H_
#include <vector>

template<typename T>

class SortingAlgorithm
{
protected:

    std::vector<T> arr;
    
public:
    explicit SortingAlgorithm(const std::vector<T>& _arr); 

    virtual ~SortingAlgorithm() = default;
    
    virtual void sort() = 0;

    const std::vector<T>& getArray() const;
};

template<typename T>
inline SortingAlgorithm<T>::SortingAlgorithm(const std::vector<T>& _arr) : arr(_arr)
{

}

template <typename T>
const std::vector<T>& SortingAlgorithm<T>::getArray() const
{
    return arr;
}




#endif // SORTINGALGORITHM_H_


