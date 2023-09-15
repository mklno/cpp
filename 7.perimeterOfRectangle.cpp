#include <iostream>
using namespace std;

int main(){
    int length, breadth, perimeter;
    cout<<"Enter the length and the breadth: ";
    cin>>length>>breadth;
    perimeter = 2 * (length + breadth);
    cout<<"Perimeter of a rectangle with length as "<<length<<" and breadth as "<<breadth<<" is "<<perimeter<<endl;
    return 0;
}