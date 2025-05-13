//----------------call by Value vs call by Reference---------------
//call by value is which copy the memory address and changes;
//call by reference is which the original memory address changes;

//------------------------------call by value -------------------------------------

#include <iostream>
using namespace std;
// Function to swap two numbers (call by value)
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByValue: x = " << x << ", y = " << y << endl;
}

int main() {
    int a = 10, b = 20;

    cout << "Before swapByValue: a = " << a << ", b = " << b << endl;
    swap(a, b); // Values are swapped inside the function
    cout << "After swapByValue: a = " << a << ", b = " << b << endl; // Original values unchanged

    return 0;
}