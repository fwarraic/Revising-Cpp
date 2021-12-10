#include <iostream>

using namespace std;

struct Employee{

    string name;
    long phoneNumber;
    int employeeNumber;

};

void printEmployeeInfo(struct Employee employee);


int main(){
    cout << "Hello Structs!" << endl;

    Employee employee1;

    employee1.name = "Fazal Warraich";
    employee1.phoneNumber = 6042231123;
    employee1.employeeNumber = 121;


    Employee employee2;

    employee2.name = "John Doe";
    employee2.phoneNumber = 6042321323;
    employee2.employeeNumber = 101;

    Employee employee3;

    employee3.name = "Sarah Baker";
    employee3.phoneNumber = 6042331423;
    employee3.employeeNumber = 69;

    cout << "Now the Data structure is set we can call each of them according to our needs: " << endl;

    cout << employee2.name << endl;
    cout << employee3.name << " " << employee3.employeeNumber << endl;
    cout << employee1.name << " " << employee1.phoneNumber << endl;

    cout << endl;
    
    cout << "----------------" << endl;
    cout << "Printing Employee Info for Employee1: " << endl;
    printEmployeeInfo(employee1);
    cout << endl;

    cout << "----------------" << endl;
    cout << "Printing Employee Info for Employee2: " << endl;
    printEmployeeInfo(employee2);
    cout << endl;

    cout << "----------------" << endl;
    cout << "Printing Employee Info for Employee3: " << endl;
    printEmployeeInfo(employee3);
    cout << endl;



}

void printEmployeeInfo(struct Employee employee){
    cout << "Name: " << employee.name << endl;
    cout << "Phone Number: " << employee.phoneNumber << endl;
    cout << "employee Number: " << employee.employeeNumber << endl;
}