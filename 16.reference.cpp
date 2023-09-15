#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *p = &x;
    p++;
    p--;
    int &y = x;
    x += 10;
    cout<<&x<<&y<<endl;
    cout<<x<<y<<endl;
    return 0;
}