// Nate 9-9-24
// arraysAreEasy.cpp
//An array is a fixed size, data structure, that must contain the same data types.

#include <iostream>
using namespace std;

int main() {

    cout << "\nArrays are easy and fun (up until the third dimension)." << endl;

    // Our first array.
    int luckyNums [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "\nThe value in luckyNum[4] is: " << luckyNums[4] << endl;

    /* To find the size of our array, as in the number of elements,
    we can divide the memory size of our array by the memory size
    of our array's datatype. */
    cout << "\nThe (memory) size of our array is: " << sizeof(luckyNums) << endl;
    cout << "\nThe size of an int is: " << sizeof(int) << endl;
    int luckyNumSize = sizeof(luckyNums) / sizeof(int);
    cout << "\nThe number of elements in our array is: " << luckyNumSize << endl;

    // Create an int array with 100 elements.
    int array100Elements[100];

    // Fill the array using a for loop.
    for (int i = 0; i < 100; i++) {
        // array100Elements[i] = rand() % 100; <---- This gives us a random number within the array.
        array100Elements[i] = i;
    }

    // Display all elements of the array with a for loop.
    for (int i = 0; i < 100; i++) {
        cout << "array100Elements[" << i << "] is " << array100Elements[i] << endl;
    }

    // Create a 2D array with 3 rows and 4 columns.
    int random2DArray[3][4];

    // Fill the array with a nested for loop.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            random2DArray[i][j] = rand() % 100;
        }
    }

    // Output the 2D array.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "random2DArray[" << i << "][" << j << "] is: " << random2DArray[i][j] << endl;;
        }
    }

    // Create a 3D array with 5 "sheets" of 3 rows and 4 columns.
    int random3DArray[5][3][4];
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 3; j++) {
            for (int k = 0; k <= 4; k++) {
                random3DArray[i][j][k] = rand() % 100;
            }
        }
    }

    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 3; j++) {
            for (int k = 0; k <= 4; k++) {
                cout << "random3DArray[" << i << "][" << j << "][" << k << "] is: " << random3DArray[i][j][k] << endl;;
            }
        }
    }

    return 0;
}
