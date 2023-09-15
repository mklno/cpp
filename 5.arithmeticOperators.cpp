#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the numbers a and b: ";
    cin>>a>>b;
    cout<<"Addition=> a+b: "<<a+b<<endl;
    cout<<"Subraction=> a-b: "<<a-b<<endl;
    cout<<"Multiplication=> a*b: "<<a*b<<endl;
    cout<<"Division=> a/b: "<<a/b<<endl;
    cout<<"Division=> a/b: "<<(float)a/(float)b<<endl;
    cout<<"Division=> a/b: "<<(float)a/b<<endl;
    cout<<"Mod=> a%b: "<<a%b<<endl;

    char x;
    x = 'z';
    int y = 4;
    cout<<"Addition=> x+y: "<<x+y<<endl;
    cout<<"Subraction=> x-y: "<<x-y<<endl;
    cout<<"Multiplication=> x*y: "<<x*y<<endl;
    cout<<"Division=> x/y: "<<x/y<<endl;
    cout<<"Mod=> x%y: "<<x%y<<endl;
    return 0;
}