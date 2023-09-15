#include <iostream>
using namespace std;

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void fun(int arr[]){
    for(int i=0; i<5; i++){
        arr[i] = arr[i]+1;
    }
}

int main(){
    int a, b;
    int arr[]={1,2,3,4,5};
    // a = 10;
    // b = 11;
    // swap(a, b);
    // cout<<a<<endl<<b<<endl;
    fun(arr);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}