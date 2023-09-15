#include <iostream>
using namespace std;

class Rectangle{

private:
    int length;
    int breadth;
public:
    void setLength(int l){
        if (l > 0)
            length = l;
        else
            length = 0;
    }
    void setBreadth(int b){
        if (b > 0)
            breadth = b;
        else
            breadth = 0;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2 * (length * breadth);
    }
    void dump(){
        cout<<this<<endl;
    }
};

int main(){
    Rectangle r;
    r.setLength(10);
    r.setBreadth(34);
    cout<<r.area()<<endl;
    cout<<"Address of r is "<<&r<<endl;
    r.dump();
}