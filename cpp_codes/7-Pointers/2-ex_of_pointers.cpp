#include <iostream>
using namespace std;

int main() {
    int num = 10;       // A normal integer variable
    int *ptr = &num;    // Pointer stores the address of num

    cout << "Value of num: " << num << endl;             // Value of num
    cout << "Address of num: " << &num << endl;          // Address of num
    cout << "Value of ptr: " << ptr << endl;             // Value stored in ptr (address of num)
    cout << "Value at ptr: " << *ptr << endl;            // Dereferencing pointer (value at address)

    // Modifying the value using the pointer
    *ptr = 20;
    cout << "After modifying, num: " << num << endl;     // num is updated to 20

    return 0;
}