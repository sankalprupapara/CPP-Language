#include<iostream>
using namespace std;

class Animal {
private:
    string name, sound;
public:
    void setName(string n) { name = n; }
    void setSound(string s) { sound = s; }
    string getName() { return name; }
    string getSound() { return sound; }
    virtual void makeSound() = 0; // Pure virtual function for abstraction
};

class Dog : public Animal {
public:
    Dog() {
        setName("Dog");
        setSound("Woof!");
    }
    void makeSound() override {
        cout << getName() << " says: " << getSound() << endl;
    }
};

class Cat : public Animal {
public:
    Cat() {
        setName("Cat");
        setSound("Meow!");
    }
    void makeSound() override {
        cout << getName() << " says: " << getSound() << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.makeSound();  
    c.makeSound();  
}

