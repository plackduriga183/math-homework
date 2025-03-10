#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Prompt user for input
    cout << "Enter a number: ";
    int num;
    cin >> num;

    // Calculate square root of number
    double sqrt_num = sqrt(num);

    // Print result to console
    cout << "The square root of " << num << " is " << sqrt_num << endl;

    return 0;
}
