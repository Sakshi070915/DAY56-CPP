//WAP in C++ to calculate fibonacci series using recursion.
#include <iostream>
using namespace std;

// Function to calculate the Fibonacci number at a given position using recursion
int fibonacci(int n) {
    if (n <= 1) { // Base case
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int N;

    // Input from the user
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        // Display the Fibonacci series
        cout << "The first " << N << " terms of the Fibonacci series are: ";
        for (int i = 0; i < N; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }

    return 0;
}
