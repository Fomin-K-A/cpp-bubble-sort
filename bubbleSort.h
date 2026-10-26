#include <utility>

template<typename T>
inline void bubbleSort(T* arr,size_t size){
    if (size < 2) {
        return;
    }
    for(int i = 0;i<size;++i){
        bool is_sorted = true;
        for(int j = size-1;j>i;--j){
            if(arr[j]<arr[j-1]){
                std::swap(arr[j],arr[j-1]);
                is_sorted = false;
            }
        }
        if(is_sorted){
            break;
        }
    }
}