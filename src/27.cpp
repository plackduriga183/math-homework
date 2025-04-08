#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 == 0) {
        cout << n * n - 1;
    } else {
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                break;
            }
        }
        
        int remainder = n / 2;
        while (remainder > 1) {
            cout << "Odd factor: " << n % remainder;
            n /= remainder;
            remainder = n % remainder ? remainder - 1 : remainder - 1;
        }
    }

    return 0;
}
