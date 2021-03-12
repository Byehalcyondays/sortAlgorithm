//
// Created by Halcyon on 2021/3/10.
//

#include <iostream>

using namespace std;


//void mergeSort(int *arr, int *ass, int lo, int mid, int hi);
//
//void sort(int *arr, int length);
//
//void sort(int *arr, int lo, int hi);
//
////对数组arr中lo至hi的元素进行排序
//void sort(int *arr, int *ass, int lo, int hi) {
//    //安全性校验
//    if (hi <= lo) {
//        return;
//    }
//    //对lo至hi之间的数据进行分两个组
//    int mid = lo + (hi - lo) / 2;
//    //分别对每一组数据进行排序
//    sort(arr, ass, lo, mid);
//    sort(arr, ass, mid + 1, hi);
//    //再把两个组进行归并
//    mergeSort(arr, ass, lo, mid, hi);
//}
//
////对arr中数组进行排序
//void sort(int *arr, int length) {
//    //辅助数组
//    int ass[length];
//    //定义两个索引 指向最大和最小索引
//    int lo = 0;
//    int hi = length - 1;
//    //调用sort重载 完成索引lo到hi的排序
//    sort(arr, ass, lo, hi);
//
//    cout << "MERGE SORT:" << endl;
//    for (int i = 0; i < length; i ++) {
//        cout << arr[i] << "  ";
//    }
//    cout << endl;
//}
//
//
////对数组中 lo-mid mid+1-hi 进行归并
//void mergeSort(int *arr, int *ass, int lo, int mid, int hi) {
//    //定义三个指针
//    int i = lo;
//    int p1 = lo;
//    int p2 = mid + 1;
//    //遍历 移动p1指针和p2指针 比较对应索引处的值 找出小的放到辅助数组的对应索引处
//    while (p1 <= mid && p2 <= hi) {
//        //比较对应索引的值
//        if (arr[p1], arr[p2]) {
//            ass[i ++] = arr[p1 ++];
//        } else {
//            ass[i ++] = arr[p2 ++];
//        }
//    }
//    //遍历 若p1指针没走完 那么移动p1指针 把对应元素放到对应索引处
//    while (p1 <= mid) {
//        ass[i ++] = arr[p1 ++];
//    }
//    //遍历 若p2指针没走完 那么移动p2指针 把对应元素放到对应索引处
//    while (p2 <= hi) {
//        ass[i ++] = arr[p2 ++];
//    }
//    //拷贝辅助数组到原数组
//    for (int i = lo; i <= hi; i ++) {
//        arr[i] = ass[i];
//    }
//}


void merge(int *arr, int low, int mid, int high) {
    //临时数组存合并后的有序序列
    int *tmp = new int[high - low + 1];
    int i = 0;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
        tmp[i ++] = arr[left] <= arr[right] ? arr[left ++] : arr[right ++];
    }
    while (left <= mid) {
        tmp[i ++] = arr[left ++];
    }
    while (right <= high) {
        tmp[i ++] = arr[right ++];
    }
    for (int j = 0; j < high - low + 1; ++ j) {
        arr[low + j] = tmp[j];
    }
    delete[] tmp;//删掉堆区的内存
}

void mergeSort(int *arr, int low, int high) {
    if (low == high) {
        return;
    }  //递归基是让数组中的每个数单独成为长度为1的区间
    int q = (low + high) / 2;
    mergeSort(arr, low, q);
    mergeSort(arr, q + 1, high);
    merge(arr, low, q, high);

    cout << "MERGE SORT:" << endl;
    for (int i = 0; i < high+1; i ++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
