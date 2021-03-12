#include <iostream>
#include "bubbleSort.cpp"
#include "test.cpp"
#include "selectionSort.cpp"
#include "insertionSort.cpp"
#include "shellSort.cpp"
#include "mergeSort.cpp"
#include "quickSort.cpp"

using namespace std;



int main() {

    int arr[10]={2,4,1,6,3,5,7,0,9,8};
    int arr1[10]={14,14,52,67,15,312,0,5,7,56};
    int length = sizeof (arr1)/sizeof (arr1[0]);
    //bubbleSort(arr1,length);
    //selectionSort(arr1,length);
    insertionSort(arr1,length);
    //shellSort(arr1,length);
    //mergeSort(arr,0,length-1);
    //quickSort(0,length-1,arr);
//    cout << "SHELL SORT:" << endl;
//    for (int i = 0; i < length; i ++) {
//        cout << arr1[i] << "  ";
//    }
//    cout << endl;
//    return 0;
}
