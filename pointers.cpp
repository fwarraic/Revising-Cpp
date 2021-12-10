#include <iostream>

using namespace std;

int main(){

    cout << "Hello Pointers!" << endl;

    int var = 100;

    cout << "This is the value --- " << var << endl;

    cout << "This is the memory address --- " << &var << endl;

    int *intP;
    intP = &var;

    cout << "This is a pointer pointing to the memory address --- " << intP << endl;
    cout << "This is dereferencing --- " << *intP << endl;

    var = 20;
    cout << "This is a pointer pointing to the same memory address --- " << intP << endl;
    cout << "This is dereferencing, value changed but not the mem addr --- " << *intP << endl;



}