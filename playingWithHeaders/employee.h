#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>

using namespace std;

class Employee{

private:
    int id;
    string name;

public:

    Employee();
    void setEmployeeId(int x);
    int getEmployeeId();

};


#endif