#include <iostream>
using namespace std;

class base{
    public:
        base(){
            cout<<"default of base"<<endl;
        }
        base(int x){
            cout<<"default of param base"<<endl;
        }
};
// whenever the constructor of the derived class is called the constructor of the base class is also executed
class derived: public base{
    public:
        derived(){
            cout<<"default of derived"<<endl;
        }
        derived(int x){
            cout<<"default of param derived"<<endl;
        }
        derived(int x, int a): base(x){
            cout<<x<<endl<<a<<endl;
        }
};

int main(){
    // base b;
    // base d(10);
    // derived d;
    // derived c(10);
    derived c(12,23);
    return 0;
}