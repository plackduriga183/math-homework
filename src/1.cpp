#include <iostream>
using namespace std;

int main() {
    // Ask user for a number
    cout << "Enter a number: ";
    int num;
    cin >> num;

    // Check if the number is even or odd
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
