#include <iostream>
#include <string>

using namespace std;

/* main function */
int main(){

    // Understanding Variables
    int number1 = 10;
    int number2 = 12;
    cout << "The number1 is: "<< number1 << endl;
    cout << "The number2 is: "<< number2 << endl;

    int sum = number1 + number2;
    cout << "The sum of number1 and number2 is :" << sum << endl;

    int diff = number1 - number2;
    cout << "The difference of number1 and number2 is :" << diff << endl;

    int mul = number1 * number2;
    cout << "The product of number1 and number2 is :" << mul << endl;

    int div = number1 / number2;
    cout << "The division of number1 and number2 is :" << div << endl;

    cout << endl;

    float decimal = 10.5;
    cout << "The float is: " << decimal << endl;

    char character = 'a';
    cout << "The character is: " << character << endl;

    double decimal2 = 100.5;
    cout << "The double is: " << decimal2 << endl;

    string word = "hello";
    cout << "The word is: " << word << endl;

    return 0;
}