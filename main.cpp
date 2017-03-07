#include <iostream>
#include "Sort.cpp"
using namespace std;

int main() {
    cout<<"Size of array: ";
    int length;
    cin >> length;
    int array[length];

    // Random and print array
    cout << "\nArray before sort: ";
    srand((unsigned) time(0));
    for (int i = 0; i < length; ++i) {
        array[i] = (rand() % 100) + 1;
        cout << array[i] << " ";
    }

    cout<<"\nArray sorted by QuickSort: ";
    int left = 0;
    int right = length - 1;
    Sort::QuickSort(array, left, right);
    for (int j = 0; j < length; ++j) {
        cout << array[j] << " ";
    }

    // Random and print array
    cout << "\nArray before sort: ";
    srand((unsigned) time(0));
    for (int i = 0; i < length; ++i) {
        array[i] = (rand() % 100) + 1;
        cout << array[i] << " ";
    }

    cout<<"\nArray sorted by Insertion Sort: ";
    Sort::InsertionSort(array, length);
    for (int j = 0; j < length; ++j) {
        cout << array[j] << " ";
    }

    // Random and print array
    cout << "\nArray before sort: ";
    srand((unsigned) time(0));
    for (int i = 0; i < length; ++i) {
        array[i] = (rand() % 100) + 1;
        cout << array[i] << " ";
    }
    cout<<"\nArray sorted by HeapSort: ";
    Sort::HeapSort(array, length);
    for (int j = 0; j < length; ++j) {
        cout << array[j] << " ";
    }
    return 0;
}