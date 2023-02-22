#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    string job;
    string dob;
    double salary;
    string marital_status;
    double bonus;
};

int main() {
    Employee emp1;
    cout << "Enter employee name: ";
    getline(cin, emp1.name);
    cout << "Enter job title: ";
    getline(cin, emp1.job);
    cout << "Enter date of birth: ";
    getline(cin, emp1.dob);
    cout << "Enter monthly salary: ";
    cin >> emp1.salary;
    cout << "Enter marital status: ";
    cin >> emp1.marital_status;
    cout << "Enter bonus: ";
    cin >> emp1.bonus;

    // Display employee information
    cout << "\nEmployee Information\n";
    cout << "---------------------------\n";
    cout << "Employee Name: " << emp1.name << endl;
    cout << "Job Title: " << emp1.job << endl;
    cout << "Date of Birth: " << emp1.dob << endl;
    cout << "Monthly Salary: " << emp1.salary << endl;
    cout << "Marital Status: " << emp1.marital_status << endl;
    cout << "Bonus: " << emp1.bonus << endl;

    return 0;
}
