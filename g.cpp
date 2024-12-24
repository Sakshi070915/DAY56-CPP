#include <iostream>
using namespace std;

// Function to calculate the sum of the first N natural numbers using recursion
int sumOfNaturalNumbers(int n) {
    if (n == 0) { // Base case
        return 0;
    }
    return n + sumOfNaturalNumbers(n - 1); // Recursive case
}

int main() {
    int N;

    // Input from the user
    cout << "Enter a positive integer: ";
    cin >> N;

    if (N < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        // Call the recursive function and display the result
        int result = sumOfNaturalNumbers(N);
        cout << "The sum of the first " << N << " natural numbers is: " << result << endl;
    }

    return 0;
}
