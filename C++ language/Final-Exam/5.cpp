#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
    virtual void draw() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) { radius = r; }
    float area() override {
        return 3.14f * radius * radius;
    }
    void draw() override {
        cout << "Drawing Circle, Radius = " << radius << endl;
    }
};

class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    float area() override {
        return length * width;
    }
    void draw() override {
        cout << "Drawing Rectangle, Length = " << length << ", Width = " << width << endl;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(4);
    shapes[1] = new Rectangle(3, 5);

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << "\n\n";
        delete shapes[i]; 
    }
}

