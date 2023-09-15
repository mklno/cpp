#include <iostream>
using namespace std;

int main(){
    char day;
    cout<<"Enter the day: ";
    cin>>day;
    switch(day){
        case 'a': cout<<"monday";
                    break;
        case 'b': cout<<"tuesday";
                break;
        default: cout <<"sorry"<<endl;
    }
    return 0;
}