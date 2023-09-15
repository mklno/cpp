#include <iostream>
using namespace std;

int main(){
    int a[5] = {2,4,6,8,10};
    int *p = a;
    cout<<"The value of p is "<<p<<endl;
    int *q = &a[1];
    cout<<"The value of q is "<<q<<endl;
    int c = p-q;
    cout<<c<<endl;
    for(int i = 0; i < 5; i++){
        cout<<*(p+i)<<endl;
    }
    return 0;
}