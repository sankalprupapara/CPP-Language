#include<iostream>
using namespace std;

class Person {
    string name, address;
    int age;
public:
    Person(string n, int a, string ad) {
        name = n; age = a; address = ad;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << endl;
    }
};

main() {
    int N;
    cout << "Enter number of persons: ";
    cin >> N;
    Person* people[N];

    for (int i = 0; i < N; i++) {
        string name, address;
        int age;
        cin.ignore();
        cout << "Name: "; getline(cin, name);
        cout << "Age: "; cin >> age; cin.ignore();
        cout << "Address: "; getline(cin, address);
        people[i] = new Person(name, age, address);
    }

    cout << "\n--- Person Details ---\n";
    for (int i = 0; i < N; i++)
        people[i]->display();

}

