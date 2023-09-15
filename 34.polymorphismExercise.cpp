#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual void area() = 0;
        virtual void perimeter() = 0;
};

class Rectangle : public Shape
{   private:
        int length;
        int breadth;
    public:
        Rectangle(int length, int breadth){
            this->length = length;
            this->breadth = breadth;
        }
        void area(){
            int area;
            area = length * breadth;
            cout<<"Area of a rectangle: "<<area<<endl;
        }
        void perimeter(){
            int perimeter;
            perimeter = 2 * (length + breadth);
            cout<<"Perimeter of a rectangle: "<<perimeter<<endl;
        }
};

class Circle: public Shape
{
    private:
        int radius;
    public:
        Circle(int radius){
            this->radius = radius;
        }
        void area(){
            int area;
            area = 3.14 * radius * radius;
            cout<<"Area of a circle: "<< area<<endl;
        }
        void perimeter(){
            int perimeter;
            perimeter = 2 * 3.14 * radius;
            cout<<"Perimeter of a circle: "<<perimeter<<endl;
        }
};

int main(){
    Shape *myShape;
    myShape = new Circle(4);
    myShape->area(); 
    myShape->perimeter();
    myShape = new Rectangle(23,34);
    myShape->area();
    myShape->perimeter();
    return 1;
}
