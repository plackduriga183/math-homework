#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    if (a > b) {
        swap(a, b);
    }
    
    cout << "The larger number is: " << a << endl;
    return 0;
}
