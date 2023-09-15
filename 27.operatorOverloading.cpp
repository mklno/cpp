#include <iostream>
using namespace std;

class complex{
    private:
        int real; 
        int img;
    public:
        complex(int real=0, int img=0){
            this->real = real;
            this->img = img;
        }
        complex operator+(complex x){
            complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;
            return temp;
        }
        void print(){
            cout<<this->real<<endl;
            cout<<img<<endl;
        }
};

int main(){
    complex one(3,5);
    complex two(42,3);
    // complex three = one.add(two);
    complex three;
    three = one + two;
    three.print();
    return 0;
}