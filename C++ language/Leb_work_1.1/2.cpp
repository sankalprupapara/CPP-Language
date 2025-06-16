#include <iostream>
using namespace std;
main() {
    int f,l;

    cout << "Enter first year : ";
    cin >> f;
    cout << "Enter last year : ";
    cin >> l;

    cout << "LEAP YEARS BETWEEN FIRST AND LAST YEAR :- ";
    for (int i=f;i<=l;i++) {
        if (i%4==0) {
            cout << i;
            if (i-1) cout << " , ";
        }
    }

}

