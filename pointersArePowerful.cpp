// Nate 9-22-24
// pointersArePowerful

#include <iostream>
#include <list>
#include <map>
#include <string>
using namespace std;

int main() {
    int a = 5;
    cout << "Value of integer a is: " << a << endl;
    int* p = &a;
    cout << "The address stored in pointer p is: " << p << endl;
    cout << "The value of integer a using pointer p is: " << *p << endl;
    *p = 35;
    cout << "The new value of a is now: " << a << endl;

    return 0;
}


