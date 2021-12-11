#include <iostream>

using namespace std;

class MyClass{
public:
    friend class MyAnotherClass;

private:
    int secret = 10;

};

class MyAnotherClass{
public:
    void revealSecret(MyClass mc){
        cout << mc.secret << endl;
    }
};


int main(){
    cout << "Hello Friend Class!" << endl;

    MyClass mc;
    MyAnotherClass mac;
    mac.revealSecret(mc);


}