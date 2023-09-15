#include <iostream>
using namespace std;

class Rectangle{

public:
    int length;
    int breadth;

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2 * (length * breadth);
    }
};

int main(){
    // created in stack
    // Rectangle r;
    // Rectangle *p;
    // p = &r;
    // p->length = 20;
    // p->breadth = 15;
    // cout<<p->area()<<endl;

    // created in heap
    Rectangle *p;
    p = new Rectangle;
    Rectangle *q = new Rectangle();



}