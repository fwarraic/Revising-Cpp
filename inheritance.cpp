#include <iostream>

using namespace std;

class Shape{
protected:
    int weight;
    int height;

public:

    void setShapeSize(int w, int h){
        weight = w;
        height = h;
    }

};

class Rectangle : public Shape{

public:
    int area(){
        return (weight * height);
    }
};

class Triangle : public Shape{

public:
    int area(){
        return (0.5 * weight * height);
    }

};

int main(){

    cout << "Hello Inheritance!" << endl;

    Rectangle rec;
    rec.setShapeSize(10,20);
    cout << "The area of a rectangle is: " << rec.area() << endl;

    Triangle tri;
    tri.setShapeSize(6,5);
    cout << "The area of a triangle is: " << tri.area() << endl;
    

}