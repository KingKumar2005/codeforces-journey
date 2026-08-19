#include <iostream>
#include <numeric> // For std::gcd (C++17 and later)

// Recursive Euclidean Algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Iterative Euclidean Algorithm
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 98, num2 = 56;

    // Using custom function
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << "\n";

    // C++17 Built-in method (Recommended for modern C++)
    std::cout << "Using std::gcd: " << std::gcd(num1, num2) << "\n";

    return 0;
}