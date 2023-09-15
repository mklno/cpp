#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    printf("hello world\n");
    std::cout<<"hello world\n";
    // printf('hello world\n');
    cout<<'h';
    cout<<'\n';

    int a, b, c;
    a = 10;
    b = 5;
    c = a + b;
    printf("Sum of a and b is %d\n", c);

    int d, e;
    printf("enter two numbers");
    cin>>d>>e;
    printf("%d", e);
    return 0;
}