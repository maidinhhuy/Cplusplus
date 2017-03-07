//
// Created by huymaidinh on 3/7/17.
//

class Sort {
public:
    static void QuickSort(int *array, int left, int right) {
        int mid = (left + right) / 2;
        int i = left;
        int j = right;

        while (i <= j) {
            while (array[i] < array[mid]) i++;
            while (array[j] > array[mid]) j--;
            if (i <= j) {
                std::swap(array[i], array[j]);
                i++;
                j--;
            }
        }

        if (left < j) Sort::QuickSort(array, left, j);
        if (i < right) Sort::QuickSort(array, i, right);
    }

    static void InsertionSort(int *array, int length) {
        int temp, j;
        for (int i = 1; i < length; i++) {
            temp = array[i];
            j = i - 1;
            while ((j >= 0) && (array[j] > temp)) {
                array[j + 1] = array[j];
                j--;
            }
            array[j+1] = temp;
        }
    }

    static void heapify(int *array, int length, int i) {
        int largest = i;
        int left = 2 * i + 1, right = 2 * i + 2;
        if (left < length && array[left] > array[largest]) {
            largest = left;
        }

        if (right < length && array[right] > array[largest]) {
            largest = right;
        }

        if (largest != i) {
            std::swap(array[largest], array[i]);
            Sort::heapify(array, length, largest);
        }

    }

    static void HeapSort(int *array, int length){
        for (int i = length / 2 - 1; i >= 0; i--) {
            Sort::heapify(array, length, i);
        }

        for (int j = length - 1; j >= 0; j--) {
            std::swap(array[0], array[j]);
            Sort::heapify(array, j, 0);
        }
    }
};

