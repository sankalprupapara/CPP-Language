#include<iostream>
using namespace std;

class Animal {
protected:
    string name, sound;
public:
    void setName(string n) { name = n; }
    void setSound(string s) { sound = s; }
    string getName() { return name; }
    string getSound() { return sound; }

    virtual void makeSound() = 0;
    virtual void displayDetails() = 0;
};

class Dog : public Animal {
public:
    Dog() {
        setName("Dog");
        setSound("Woof!");
    }

    void makeSound() override {
        cout << name << " says: " << sound << endl;
    }

    void displayDetails() override {
        cout << "Animal: Dog\nSound: " << sound << "\nLoyal and friendly.\n\n";
    }
};

class Cat : public Animal {
public:
    Cat() {
        setName("Cat");
        setSound("Meow!");
    }

    void makeSound() override {
        cout << name << " says: " << sound << endl;
    }

    void displayDetails() override {
        cout << "Animal: Cat\nSound: " << sound << "\nLoves to nap and purr.\n\n";
    }
};

main() {
    
    Animal* animals[2];

    animals[0] = new Dog();
    animals[1] = new Cat();

    cout << "--- Animal Details ---\n";
    for (int i = 0; i < 2; i++) {
        animals[i]->displayDetails();
    }

    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

}

