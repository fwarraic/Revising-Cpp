#include <iostream>

using namespace std;

void introDisplay();
int sum(int a, int b);
int promptNumber(int n1, int n2);


int main(){

    introDisplay();

    int n1 = 2;
    int n2 = 3;

    cout << "The following function 'sum' returns by value: " << sum(n1,n2) << endl;

    cout << endl;

    int result = promptNumber(n1, n2);

    cout << "This function asks numbers and then calls sum to do the summation which is: " << endl;
    cout << result << endl;

    cout << endl;

    cout << "Now that is cool, Bye!" << endl;

    cout << endl;


}

void introDisplay(){

    cout << "Hello! Welcome to the functions game!" << endl;
    cout << "Just apply functions to your program like I am in a function" << endl;
    cout << "Now that is fun!" << endl;

    cout << endl;
}

int sum(int a, int b){

    int result = a + b;
    return result;
}

int promptNumber(int n1, int n2){


    cout << "Now we will add two numbers: " << endl;
    cout << "Please enter the first number: " << endl;
    cin >> n1;

    cout << "Now please enter the second number: " << endl;
    cin >> n2;

    int result = sum(n1, n2);
    return result;
}