//
// Created by Halcyon on 2021/3/10.
//

#include <iostream>

using namespace std;

void insertionSort(int *arr, int length) {
    int cur;
    for (int i = 1; i < length; i ++) {
        cur = arr[i];
        int j = i - 1;
        while(j>=0 && cur <arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j + 1] = cur;
    }
    cout << "INSERTION SORT:" << endl;
    for (int i = 0; i < length; i ++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}


