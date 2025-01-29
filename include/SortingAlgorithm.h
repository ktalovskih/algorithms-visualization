#ifndef SORTINGALGORITHM_H_
#define SORTINGALGORITHM_H_
#include <vector>

template<typename T>

class SortingAlgorithm
{
protected:

    std::vector<T> arr;

    std::vector<std::vector<T>> chronology;
    
public:
    explicit SortingAlgorithm(const std::vector<T>& _arr); 

    virtual ~SortingAlgorithm() = default;
    
    virtual void sort() = 0;

    const std::vector<T>& getArray() const;

    void setNewVector(const std::vector<T>& _arr);

    const std::vector<std::vector<T>> getChronology() const;

    void addToChronology(const std::vector<T>& _arr);

    void clearChronology();

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

template <typename T>
void SortingAlgorithm<T>::setNewVector(const std::vector<T>& _arr){  // скопировал параметры из конструктора, если что поправь. //ВСЕ ОК ВРОДЕ БЫ 
    this->arr = _arr;
}

template <typename T>
const std::vector<std::vector<T>> SortingAlgorithm<T>::getChronology() const{
    return this->chronology;
}

template <typename T>
void SortingAlgorithm<T>::addToChronology(const std::vector<T>& _arr){
    this->chronology.push_back(_arr);
}

template <typename T>
void SortingAlgorithm<T>::clearChronology(){
    this->chronology = std::vector<std::vector<T>>();
}


#endif // SORTINGALGORITHM_H_


