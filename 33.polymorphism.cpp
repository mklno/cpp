#include <iostream>
using namespace std;

class Car
{
    public:
        // virtual void start(){
        //     cout<<"Car started"<<endl;
        // }
        // virtual void stop(){
        //     cout<<"Car stopped"<<endl;
        // }

        // pure virtual functionsx
        virtual void start() = 0;
        virtual void stop() = 0; 
};

class Innova: public Car
{
    public:
        void start(){
            cout<<"Innova started"<<endl;
        }
        void stop(){
            cout<<"Innova stopped"<<endl;
        }
};

class Swift: public Car 
{
    public:
        void start(){
            cout<<"Swift started"<<endl;
        }
        void stop(){
            cout<<"Swift stopped"<<endl;
        }
};

// 1. So, as far as now, the class car is useless since both innova and swift are overriding the functions of the car class.
// 2. The car class is more like a abstract concept there is nothing which is just called, more like generalisation, like men, humans etc
// 3. The concept of polymorphism is that using the same car we are staring both innova and swift
// 4. pure virtual function. the function of the parent class is set to 0, hence the derived class should always override it
// if not the class becomes abstract
int main(){
    Car *myCar = new Innova(); // this is an important statment right have a look.
    myCar->start();
    myCar->stop();
    myCar = new Swift();
    myCar->start();
    myCar->stop();
    return 1;
}