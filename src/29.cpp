#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1 > 0 && num2 > 0) {
        if (num1 % 2 == 0 && num2 % 2 == 0) {
            if (num1 + num2 >= 10) {
                cout << "Their sum is at least 10." << endl;
            } else {
                cout << "Their sum is greater than or equal to 10." << endl;
            }
        } else {
            if (num1 % 2 != 0 || num2 % 2 != 0) {
                cout << "At least one of the numbers must be even." << endl;
            } else {
                if (num1 + num2 >= 10) {
                    cout << "Their sum is at least 10." << endl;
                } else {
                    cout << "Their sum is greater than or equal to 10." << endl;
                }
            }
        }
    } else {
        cout << "Both numbers must be positive and less than 10." << endl;
    }

    return 0;
}
