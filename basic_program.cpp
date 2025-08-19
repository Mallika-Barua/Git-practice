#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}


void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n) << endl;

    return 0;
}
