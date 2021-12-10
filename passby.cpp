#include<iostream>

using namespace std;


void passByValue(int val);

void passByReference(int *val);

int main(){

    int x = 20;

    passByValue(x);
    cout << x << endl;

    passByReference(&x);
    cout << x << endl;


}


void passByValue(int val){

    val = 200;
}

void passByReference(int *val){

    *val = 200;
}