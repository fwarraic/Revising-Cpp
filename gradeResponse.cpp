#include <iostream>

using namespace std;

int main(){

    cout << "Enter the grade you received and know what it means" << endl;

    char grade;
    cin >> grade;

    switch(grade){

        case 'A' : cout << "Excellent!" << endl;
        break;

        case 'B' : cout << "Very Good!" << endl;
        break;

        case 'C' : cout << "You passed!" << endl;

    }

}