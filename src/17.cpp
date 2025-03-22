#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                // Even number
                cout << i << " is even" << endl;
            } else {
                // Odd number
                cout << i << " is odd" << endl;
            }
        }
    } else {
        cout << "Please enter a positive integer." << endl;
    }
    
    return 0;
}
