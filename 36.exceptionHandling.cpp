#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    a = 10;
    b = 9; 
    
    try
    {
        if (b == 0)
            throw (string)"Its an error";
        c = a/b;
        cout<<c<<endl;
    }
    catch(string err)
    {
        cout<<err<<endl;
    }
    return 1;
}