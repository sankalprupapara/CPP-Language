#include <iostream>
using namespace std;
main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int a[n]; 

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Even elements of an Array: ";
    for (int i=0;i<n;i++) {
        if (a[i]%2==0) {
            cout << a[i];
            if (i<n-1) cout << " , "; 
        }
    }

}

