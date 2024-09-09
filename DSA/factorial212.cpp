#include <iostream>
using namespace std;

const int m = 1000000007; // Example value of 'm', you can change it as needed

int factorial_mod_m(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial = (factorial * i) % m;
    }
    return factorial;
}

int main() {
    int n = 212;
    int result = factorial_mod_m(n);
    cout << "Factorial of " << n << " mod " << m << " is: " << result << endl;
    return 0;
}
