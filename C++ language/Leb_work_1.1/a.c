#include <iostream>
using namespace std;

class Student
{
public:
    int i, a;
    string n, c, ct, e, clg;

    void setDetails(int i, string n, int a, string c, string ct, string e, string clg)
    {
        this->i = i;
        this->n = n;
        this->a = a;
        this->c = c;
        this->ct = ct;
        this->e = e;
        this->clg = clg;
    }

    void getDetails()
    {
        cout << "Stu_ID :- " << i << endl;
        cout << "Stu_Name :- " << n << endl;
        cout << "Stu_Age :- " << a << endl;
        cout << "Stu_Course :- " << c << endl;
        cout << "Stu_City :- " << ct << endl;
        cout << "Stu_Email :- " << e << endl;
        cout << "Stu_College :- " << clg << endl;
    }
};

int main()
{
    Student students[5];
    int i, a;
    string n, c, ct, e, clg;

    cout << "Enter details for 5 students." << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Stu_ID :- ";
        cin >> i;
        cout << "Stu_Name :- ";
        cin >> n;
        cout << "Stu_Age :- ";
        cin >> a;
        cout << "Stu_Course :- ";
        cin >> c;
        cout << "Stu_City :- ";
        cin >> ct;
        cout << "Stu_Email :- ";
        cin >> e;
        cout << "Stu_College :- ";
        cin >> clg;
        students[i].setDetails(i, n, a, c, ct, e, clg);
    }

    cout << "Displaying all student records:\n";
    for (int i = 0; i < 5; i++)
    {
        students[i].getDetails();
    }

    return 0;
}
