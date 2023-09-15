#include <iostream>
using namespace std;

void swap(int &a, int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main(){
  int a,b;
  a = 10;
  b = 12;
  swap(a, b);
  cout<<a<<endl<<b<<endl;
  return 0;
}

// During the compilation of source code to machine code, when the
// function has arguments which are passed by reference, then there is no 
// separate activation record created for it. The contents of the function
// are copied to the main function everytime the function is called.