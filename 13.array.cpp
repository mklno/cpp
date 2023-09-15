#include <iostream>
using namespace std;

int main(){
    // int a[10];
    // cout<<sizeof(a)<<endl;
    // for(int i = 0; i < 9; i++){
    //     cout<<a[i]<<endl;
    // }

    // int a[10] = {1,2,3,4,5};
    // for(int i = 0; i<10; i++) {
    //     cout<<a[i]<<endl;
    // }

    // int a[10]= {1,23};
    // for(int x: a ){
    //     cout<<x<<endl;
    // }

    // int a[] = {1,2,3, 4,5,6,7};
    // int n = 7, sum = 0;
    // for(int x: a){
    //     sum += x;
    // }
    // cout<<sum<<endl;

    // int a[] ={4,8,6,9,5,2,7};
    // int n = 7;
    // int max = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     if (a[i] > max){
    //         max = a[i];
    //     }
    // }
    // cout<<max<<endl;

    // int a[10] = {6,11,25,8,15,7,12,20,9, 14}, n = 10, key;
    // cout<<"Enter the key: ";
    // cin>>key;
    // for(int i = 0; i < 10; i++){
    //     if (a[i] == key){
    //         cout<<"Key is found at index: "<<i<<endl;
    //     }
    // }

    int a[] = {6,8,13,17,20,22,25,28, 30, 35};
    int n = 9;
    int start = 0, stop = n;
    int key;
    cin>>key;
    while(start < stop){
        int mid = (start + stop)/2;
        if (key > a[mid]){
            start = mid;
        }else if (key < a[mid]){
            stop = mid;
        }else{
            cout<<mid<<endl;
            break;
        }
    }
    return 0;
}