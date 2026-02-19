#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};
Employee E;
void setdata() {
    E.name = "Qasim";
    E.id = 1021;
    E.salary = 10200;
}
void Display() {
    cout << "Employee Name : " << E.name << endl;
    cout << "Employee ID   : " << E.id << endl;
    cout << "Employee Salary: " << E.salary << endl;
}
void increaseSalary(Employee& E) {
    E.salary += (E.salary * 0.10);
    cout << "The increased salary is = " << E.salary << endl;
}
int main() {
    setdata();
    Display();
    increaseSalary(E);
    return 0;
}
