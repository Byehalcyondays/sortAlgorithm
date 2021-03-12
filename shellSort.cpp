//
// Created by Halcyon on 2021/3/10.
//

#include <iostream>

using namespace std;


void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

//void shellSort(int *arr, int length){
//    int h = length / 2;
//    //每一波gap缩一半
//    for(h; h > 0; h/=2){
//        //按gap的间隔，一直往后移动
//        for(int i = 0; i < length - h; i++){
//            int tmp = i;
//            //发现前面节点大于后面节点，则互换
//            //往左换的那个值要不停地以gap互换，直到[0-i]的、间距为gap的子串为递增序列
//            while(tmp>=0 && arr[tmp] > arr[tmp + h]){
//                swap(arr[tmp], arr[tmp + h]);
//                tmp-=h;
//            }
//        }
//    }
//
//    cout << "SHELL SORT:" << endl;
//    for (int i = 0; i < length; i ++) {
//        cout << arr[i] << "  ";
//    }
//    cout << endl;
//}


void shellSort(int *arr,int length){
    int h =1;
    while (h<length/2){
        h=h*2+1;
    }

    while(h>=1){
        for(int i=h;i<length;i++){
            int j=i,temp;
            while(j>=h){
                if(arr[j]<arr[j-h]){
                    temp=arr[j];
                    arr[j]=arr[j-h];
                    arr[j-h]=temp;
                }else{
                    break;
                }
                j-=h;
            }
        }
        h/=2;
    }

    cout << "SHELL SORT:" << endl;
    for (int i = 0; i < length; i ++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}