#include <iostream>
using namespace std;

class dummy
{
    public:
    dummy(){
        cout<<"object is created by the constructor"<<endl;
    }
    ~dummy(){
        cout<<"object is destroyed by the destructor"<<endl;
    }
};

int main(){
    dummy *myDummy;
    myDummy = new dummy();
    delete myDummy;
    return 0;
}