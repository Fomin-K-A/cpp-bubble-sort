#include <iostream>
#include <utility>

template<typename T>
void bubbleSort(T* arr,int size){
    for(int i = 0;i<size;++i){
        bool is_sorted = true;
        for(int j = size-1;j>0;--j){
            if(arr[j]<arr[j-1]){
                std::swap(arr[j],arr[j-1]);
                is_sorted = false;
            }
        }
        if(is_sorted){
            return;
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 1, 9, 2, 7, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before: ";
    for (int x : arr){
        std::cout << x << ' ';
    }
    std::cout << '\n';

    bubbleSort(arr, size);

    std::cout << "After: ";
    for (int x : arr){ 
        std::cout << x << ' ';
    }
    std::cout << '\n';

    return 0;
}