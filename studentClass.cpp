#include <iostream>
using namespace std;

class Student{
    private:
        int rollNumber;
        string name;
        int maths;
        int science;
        int social;
    
    public:
        Student(int rollNumber, string name, int maths, int science, int social);
        int totalMarks();
        char grade();
        void dummy(){
            cout<<this<<endl;
        }
};
Student::Student(int rollNumber, string name, int maths, int science, int social){
    this->rollNumber = rollNumber;
    this->name = name;
    this->maths = maths;
    this->science = science;
    this->social = social; 
}
int Student::totalMarks(){
    return maths+science+social;   
}

char Student::grade(){
    char grade;
    int totalMarks = Student::totalMarks();
    int average = totalMarks / 3;
    if (average > 60)
        grade = 'P';
    else
        grade = 'F';
    return grade;
}

int main(){
    Student mano(21, "Mano", 98,94,100);
    cout<<mano.grade()<<endl;
    cout<<&mano<<endl;
    mano.dummy();
    Student mikasa(32,"Mikasa", 32,46,57);
    cout<<&mikasa<<endl;
    mikasa.dummy();
    return 0;
}