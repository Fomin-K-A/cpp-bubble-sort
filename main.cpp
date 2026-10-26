#include <iostream>
#include "bubbleSort.h"

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