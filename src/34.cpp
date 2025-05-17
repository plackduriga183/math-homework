#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1 > num2) {
        swap(num1, num2);
    }
    
    if (num1 % 2 == 0 && num2 % 2 != 0) {
        num1 = abs(num1 - num2);
    } else if (num1 % 2 != 0 && num2 % 2 == 0) {
        num2 = abs(num1 - num2);
    }
    
    cout << "The swapped numbers are: " << num1 << " and " << num2;
    
    return 0;
}
