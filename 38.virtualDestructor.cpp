#include <iostream>
using namespace std;

class Base
{
    public:
    Base(){
        cout<<"Base class object is created"<<endl;
    }
    virtual ~Base(){
        cout<<"Base class object is destroyed"<<endl;
    }
};

class Derived: public Base
{
    public:
    Derived(){
        cout<<"Derived class object is created"<<endl;
    }
    ~Derived(){
        cout<<"Derived class object is destroyed"<<endl;
    }
};

int main(){
    // Base a;
    Derived b;

    // Base *a = new Derived();
    // delete a;

    // Base *b = new Derived();
    // delete b;
    return 0;
}