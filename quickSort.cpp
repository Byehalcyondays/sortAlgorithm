////
//// Created by Halcyon on 2021/3/10.
////
//
#include <iostream>
#include <vector>

using namespace std;
//
//void quickSort(int *arr, int length);
//
//void quickSort(int *arr, int lo, int hi);
//
//int partition(int *arr, int lo, int hi);
//
////对数组内元素进行排序
//void quickSort(int *arr, int length) {
//    int lo = 0;
//    int hi = length - 1;
//    quickSort(arr, lo, hi);
//
//    cout << "QUICK SORT:" << endl;
//    for (int i = 0; i < length; i ++) {
//        cout << arr[i] << "  ";
//    }
//    cout << endl;
//}
//
//void quickSort(int *arr, int lo, int hi) {
//    //安全性校验
//    if (hi <= lo) {
//        return;
//    }
//
//    //需要对数组中lo索引到hi索引的元素进行分组，分为左右两个自组
//    //返回的是分组的分界值所在的索引 分解之位置变换后的索引
//    int divide = partition(arr, lo, hi);
//    //让左自组有序
//    quickSort(arr, lo, divide - 1);
//    //让右自组有序
//    quickSort(arr, divide + 1, hi);
//}
//
//int partition(int *arr, int lo, int hi) {
//    int temp;
//    //确定分界值
//    int key = arr[lo];
//    //定义两个指针 分别指向待切分的元素的最小索引处和最大索引处的下一个位置
//    int left = lo;
//    int right = hi + 1;
//    //切分
//    while (true) {
//        //先从右向左扫描 移动right指针 找到一个比分界值小的元素 停止
//        while (key <= arr[right --]) {
//            if (right == lo) {
//                break;
//            }
//        }
//        //先从左向右扫描 移动left指针 找到一个比分界值大的元素 停止
//        while (key >= arr[left ++]) {
//            if (left == hi) {
//                break;
//            }
//        }
//        //判断乐left>=right 是退出循环 否则交换元素
//        if (left >= right) {
//            break;
//        } else {
//            temp = left;
//            left = right;
//            right = temp;
//        }
//    }
//    temp = lo;
//    lo = left;
//    left = temp;
//    return left;
//}



//快速排序（从小到大）
void quickSort(int left, int right, int *arr) {
    if (left >= right) {
        return;
    }
    int i, j, base, temp;
    i = left, j = right;
    base = arr[left];  //取最左边的数为基准数
    while (i < j) {
        while (arr[j] >= base && i < j) {
            j --;
        }
        while (arr[i] <= base && i < j) {
            i ++;
        }
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    //基准数归位
    arr[left] = arr[i];
    arr[i] = base;
    quickSort(left, i - 1, arr);//递归左边
    quickSort(i + 1, right, arr);//递归右边

    cout << "QUICK SORT:" << endl;
    for (int i = 0; i < right+1; i ++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}


//快速排序（从大到小）
void quickSort_r(int left, int right, vector<int> &arr) {
    if (left >= right) { //递归边界条件
        return;
    }
    if (left < 0 || right >= arr.size()) {
        cout << "error args! array bound." << endl;
        return;
    }//非法输入判断,防止数组越界
    int i, j, base, temp;
    i = left, j = right;
    base = arr[left];  //取最左边的数为基准数
    while (i < j) {
        while (arr[j] <= base && i < j) {
            j --;
        }
        while (arr[i] >= base && i < j) {
            i ++;
        }
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    //基准数归位
    arr[left] = arr[i];
    arr[i] = base;
    quickSort_r(left, i - 1, arr);//递归左边
    quickSort_r(i + 1, right, arr);//递归右边
}