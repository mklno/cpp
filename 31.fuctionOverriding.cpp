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
    Child kiddo;
    // kiddo.Parent::display(); // To call the function without overriding using scope resolution
    kiddo.display();
    return 1;  
}

// When performing function overriding make sure its done as function overriding and not as function overloading(which is nothing
// but adding parameters to the function which is being overrrided)