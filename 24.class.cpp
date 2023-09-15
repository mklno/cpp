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
    Rectangle r1, r2;  // it is stored in stack, the memory is total size of the data memebers and not functions
    r1.length = 10;
    r1.breadth = 5;
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
}

// The difference between sturcture and class is that everything inside as class is private by default and where as
// in structure everything public by default.