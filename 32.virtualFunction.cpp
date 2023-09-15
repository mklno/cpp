#include <iostream>
using namespace std;

class Parent{
    public:
        virtual void display(){
            cout<<"Hello World from Parent"<<endl;
        }
};

class Child : public Parent{
    public:
        void display(){
            cout<<"Hello World from Child"<<endl;
        }
};  

int main(){
    Parent *p = new Child();
    p->display(); // we know from earlier that the base class function will be called which is the function present in the Parent class.
    return 1;  
}
