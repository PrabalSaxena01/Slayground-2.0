#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1; // Base cases: F(1) = 1, F(2) = 1
    }

    int prev1 = 1, prev2 = 1, current = 0;
    for (int i = 3; i <= n; ++i) {
        current = prev1 + prev2; // Calculate the current Fibonacci number
        prev1 = prev2;          // Shift the previous values
        prev2 = current;
    }
    return current;
}

int main() {
    int n;
    cin >> n; // Input the Fibonacci index

    int result = fibonacci(n);
    cout << result << endl; // Output the nth Fibonacci number

    return 0;
}
