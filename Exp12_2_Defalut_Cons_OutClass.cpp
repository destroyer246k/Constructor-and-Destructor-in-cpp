//Patel Vishwas
//24070123072
//A3
#include <iostream>
using namespace std;
class Employee{
    int E_ID;
    string Name;
    string  Department;
    double Salary;
public:
    Employee();
    void display();
};
Employee::Employee(){
        cout << "Enter E_ID: ";
        cin >> E_ID;
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Department: ";
        cin >> Department;
        cout << "Enter Salary: ";
        cin >> Salary;
    }
void Employee::display(){
    cout << endl <<"Details: "<< "E_ID: " << E_ID<< endl << "Name: " << Name<< endl << "Department: " << Department<< endl << "Salary: " << Salary;
}
int main(){
    Employee e;
    e.display();
    return 0;
}
/*
Output:
Enter E_ID: 101
Enter Name: Vishwas
Enter Department: Production
Enter Salary: 10000000

Details: 
E_ID: 101
Name: Vishwas
Department: Production
Salary: 10000000
*/