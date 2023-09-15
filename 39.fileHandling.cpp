#include <fstream>
#include <iostream>
using namespace std;

int main(){
    // ofstream myfile("ok.txt", ios::app);
    // myfile<<"so what"<<endl;
    // myfile.close();

    ifstream file;
    file.open("ok.txt");
    string firstline;
    file>>firstline;
    cout<<firstline;
}