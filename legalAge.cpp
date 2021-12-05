#include <iostream>

using namespace std;

int main(){

    int legalAge = 18;

    cout << "Welcome and check whether you are of Legal age or not!" << endl;
    cout << endl;

    int age;
    cout << "Please enter your age: " << endl;
    cin >> age;

    int yearsToBeLegal = legalAge - age;

    if((age >= legalAge) && (age > 0)){
        cout << "You are of legal age!" << endl;
        cout << endl;

    }else{
        cout << "You are not of legal age yet." << endl;
        cout << "Number of years left to become legal age: " << yearsToBeLegal << endl;
        cout << endl;
    }


}