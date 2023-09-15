#include <iostream>
using namespace std;
int a = 20;
void fun(){
    static int c = 15;
    a++;
    c++;
    cout<<c<<endl;
}

int main(){
    int b = 10;
    int a = 34;
    fun();
    a--;
    cout<<::a<<endl; 
    fun();
    return 0;
}

// when there are multiple variable with the same name
// but are part of different scopes, the variable in the global
// scope can be accessed direcly by using a scope resolution
// int a can be directly accessed by ::a