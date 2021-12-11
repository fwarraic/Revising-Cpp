#include <iostream>

using namespace std;


class Vector{

public:

    int x;
    int y;

    Vector(){

    }

    Vector(int a, int b){

        x = a;
        y = b;
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }

    Vector operator+(const Vector& param);

};

Vector Vector::operator+(const Vector& param){
    Vector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;

    return temp;
}


int main(){

    cout << "Hello Operator Overloading!" << endl;

    Vector vec1(1,2);
    Vector vec2(3,4);
    Vector vec3;

    vec3 = vec1 + vec2;

    cout << "vec3 is (" << vec3.x << "," << vec3.y << ")" << endl;




}