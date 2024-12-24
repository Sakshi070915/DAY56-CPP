//WAP to demonstrate destructor in C++
#include <iostream>
using namespace std;

// Class to demonstrate a destructor
class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called." << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    cout << "Creating an object of the Demo class." << endl;
    {
        Demo obj; // Constructor will be called here
    } // Destructor will be called here as obj goes out of scope

    cout << "Object out of scope. Program ending." << endl;

    return 0;
}
