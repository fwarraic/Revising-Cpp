#include <iostream>

using namespace std;

int main(){

    int x;
    cout << "Please enter the first number: " << endl;
    cin >> x;

    int y;
    cout << "Please enter the second number: " << endl;
    cin >> y;

    cout << endl;

    cout << "Your results are:" << endl;
    cout << endl;
    
    int sum = x + y;
    cout << "The sum of first and second number is: " << sum << endl;

    int subtraction = x - y;
    cout << "The difference of first and second number is: " << subtraction << endl;

    int multiplication = x * y;
    cout << "The product of first and second number is: " << multiplication << endl;

    float division = x / y;
    cout << "The division of first and second number is: " << division << endl;

    int remainder = x % y;
    cout << "The remainder of first and second number is: " << remainder << endl;

    cout << "End of program" << endl;

    return 0;


}