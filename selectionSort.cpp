//
// Created by Halcyon on 2021/3/10.
//

#include <iostream>

using namespace std;

void selectionSort(int *arr, int length) {
    int min;
    int temp;
    for (int i = 0; i < length; i ++) {
        min = i;
        for (int j = i + 1; j < length; j ++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    cout << "SELECTION SORT:" << endl;
    for (int i = 0; i < length; i ++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
