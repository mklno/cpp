#include <iostream>
using namespace std;

int main(){
    int base, height;
    float area;
    cout<<"Enter base and height: ";
    cin>>base>>height; 
    area = (float)(base * height)/ 2;
    cout<<"Area of the triangle with base "<<base<<" and height "<<height<<" is "<<area<<endl;
    return 0;
}