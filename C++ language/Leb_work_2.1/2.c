#include<iostream>
using namespace std;

class Employee {
public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    double emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, emp_name);
        cout << "Enter Employee Age: ";
        cin >> emp_age;
        cin.ignore();
        cout << "Enter Employee Role: ";
        getline(cin, emp_role);
        cout << "Enter Employee Salary: ";
        cin >> emp_salary;
        cin.ignore();
        cout << "Enter Employee City: ";
        getline(cin, emp_city);
        cout << "Enter Employee Experience (years): ";
        cin >> emp_experience;
        cin.ignore();
        cout << "Enter Employee Company Name: ";
        getline(cin, emp_company_name);
        cout << "-----------------------------\n";
    }

    void displayDetails() {
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nName: " << emp_name;
        cout << "\nAge: " << emp_age;
        cout << "\nRole: " << emp_role;
        cout << "\nSalary: " << emp_salary;
        cout << "\nCity: " << emp_city;
        cout << "\nExperience: " << emp_experience << " years";
        cout << "\nCompany: " << emp_company_name;
        cout << "\n-----------------------------";
    }
};

main() {
    Employee emp[5];

   
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for Employee " << i + 1 << ":\n";
        emp[i].getDetails();
    }


    cout << "\n\nEmployee Records:\n";
    for (int i = 0; i < 5; i++) {
        emp[i].displayDetails();
    }

   
}

