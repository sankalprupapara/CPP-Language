#include<iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int publishedYear;

    
    Book(string t, string a, int y) {
       title = t;
       author = a;
       publishedYear = y;
    }

    
    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << publishedYear << endl;
    }
};

 main() {
    
    Book books[3] = {
        Book("The Gyan gita", "shakib boss", 1925),
        Book("number", "ramanuja", 1949),
        Book("To Kill a Mockingbird", "Harper Lee", 1960)
	}   ;

    
    for (int i = 0; i < 3; i++) {
        books[i].display();
    }
}

