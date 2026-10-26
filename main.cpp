#include <iostream>
#include <cassert>
#include <string>
#include <algorithm>
#include "bubbleSort.h"

template <typename T>
void runTest(T* arr, int size) {
    bubbleSort(arr, size);
    assert(std::is_sorted(arr, arr + size) && "Array is not sorted!");
}

int main() {
    std::cout << "Running tests...\n";

    int arr1[] = {5, 3, 8, 1, 9, 2};
    runTest(arr1, 6);

    int arr2[] = {1, 2, 3, 4, 5};
    runTest(arr2, 5);

    int arr3[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    runTest(arr3, 9);

    int arr4[] = {3, 1, 3, 2, 1, 2, 3};
    runTest(arr4, 7);

    int arr5[] = {42};
    runTest(arr5, 1);

    std::string arr6[] = {"banana", "apple", "cherry", "date"};
    runTest(arr6, 4);

    std::cout << "All tests passed successfully!\n";
    return 0;
}