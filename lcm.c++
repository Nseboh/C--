#include <iostream>   // Include the header file that contains input/output functions

using namespace std;  // Declare the namespace that will be used

// This function calculates the greatest common divisor of two integers
int gcd(int a, int b) {
    if (b == 0) {  // If b is zero, then a is the gcd
        return a;
    }
    return gcd(b, a % b);  // Otherwise, recurse with b and a % b
}

// This function calculates the least common multiple of two integers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);  // Calculate the lcm using the gcd
}

// The main function of the program
int main() {
    int num1, num2;  // Declare two integer variables
    cout << "Enter first number: ";  // Output a prompt for the first number
    cin >> num1;  // Read the first number from the user
    cout << "Enter second number: ";  // Output a prompt for the second number
    cin >> num2;  // Read the second number from the user
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2) << endl;  // Output the lcm of the two numbers
    return 0;  // Indicate successful program execution
}
