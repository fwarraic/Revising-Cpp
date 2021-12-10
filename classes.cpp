#include <iostream>

using namespace std;

class Employee{
private:
    string name = "Fazal Warraich";
    long phoneNumber = 6043381196;
    int employeeId = 12;

public:
    void printEmployeeInfo(){
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Employee ID: " << employeeId << endl;
    }

};

int main(){
    cout << "Hello Classes!" << endl;

    Employee employee1;
    employee1.printEmployeeInfo();


}