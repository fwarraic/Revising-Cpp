#include <iostream>

using namespace std;

int main(){

    cout << "Welcome to the summation game!" << endl;
    cout << "Your one job is to enter a number of your choice." << endl;
    cout << "Then see how big you can make your number" << endl;
    cout << "Goodluck!!" << endl;

    cout << endl;

    int num = 0;
    int sum = 0;

    while (true){
        cout << "Enter the number gamer: " << endl;
        cin >> num;

        sum += num;

        cout << "Now your big sum is: " << sum << endl;
        cout << "Press ctrl+c to quit the program" << endl;

        cout << endl;
    }
    

}