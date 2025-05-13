//----------------call by Value vs call by Reference---------------
//call by value is which copy the memory address and changes;
//call by reference is which the original memory address changes;

//------------------------------call by reference--------------------------------------

#include <iostream>
using namespace std;
// Function to swap a number by reference
void swapByReference(int &x) {
    x = x + 1; // Directly modifies the original variable
}

int main() {
    int num = 5;

    cout << "Before swapByReference: num = " << num << endl;
    swapByReference(num); // Passes reference of num
    cout << "After swapByReference: num = " << num << endl; // Original value is changed

    return 0;
}
