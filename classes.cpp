#include <iostream>

using namespace std;

class Employee{
private:
    string name = "Fazal Warraich";
    long phoneNumber = 6044382196;
    int employeeId = 12;

public:
    void printEmployeeInfo(){
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Employee ID: " << employeeId << endl;
    }

    void setName(string x){
        name = x;
    }

    string getName(){
        return name;
    }
};

int main(){
    cout << "Hello Classes!" << endl;

    Employee employee1;
    employee1.printEmployeeInfo();

    cout << endl;
    cout << employee1.getName() << endl;
    employee1.setName("Nami Kazuma");
    cout << employee1.getName() << endl;


}