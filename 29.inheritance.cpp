#include <iostream>
using namespace std;

class base{
    public:
        int x;
        void show(){
            cout<<x<<endl;
        }
};

class derived: public base{
    public:
        int y;
        void display(){
            cout<<x<<endl<<y<<endl;
        }
};

int main(){
    base b;
    b.x = 10;
    b.show();
    derived d;
    d.x =29;
    d.y = 20;
    d.display();
    return 0;
}