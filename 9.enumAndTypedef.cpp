#include <iostream>
using namespace std;

typedef int marks;
typedef int rollNumber;

int main(){
    enum departments {CS = 1, ECE, IT, CIVIL};
    departments d = CIVIL;
    cout << d << endl;

    enum file {New=193743, Open, Save=1, Close};
    file firstOperation = Open;
    cout << firstOperation << endl;
    firstOperation = Close;
    cout << firstOperation << endl;
    cout << (firstOperation << 1) << endl;
    marks m1,m2,m3;
    m1 = 10;
    cout << m1 << endl;
    return 0;
}