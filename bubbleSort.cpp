//
// Created by Halcyon on 2021/3/10.
//
#include <iostream>

using namespace std;

void bubbleSort(int *arr,int length) {
    int temp;
    for (int i = 0; i < length; i ++) {
        for (int j = 0; j < length - 1 - i; j ++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "BUBBLE SORT:" << endl;
    for (int i = 0; i < length; i ++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}



//void bubbleSort(vector<int> &v){
//    int temp;
//    for(int i=0;i<v.size();i++){
//        for(int j=0;j<v.size()-i;j++){
//            if(v[j]>v[j+1]){
//                temp=v[j];
//                v[j]=v[j+1];
//                v[j+1]=temp;
//            }
//        }
//    }
//    cout<<"BUBBLE SORT:"<<endl;
//    for(auto it=v.begin();it!=v.end();it++){
//        cout<<*it<<"  ";
//    }
//    cout<<endl;
//}
