#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, mult= 10, rn = 0, ld;
    cout<<"Enter the number: ";
    cin>>n;
    while(n > 0){
        ld = n % 10;
        rn = rn * 10 + ld;
        n = n / 10;
    }
    cout<<rn<<endl;
    return 0;
}