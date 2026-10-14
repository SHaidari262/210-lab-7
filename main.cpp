
#include <iostream>
#include <string>
using namespace std;

// Reverse the dynamic array using pointer notation
string* reverseArray(string* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        string temp = *(arr + i);
        *(arr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = temp;
    }

    return arr;
}

// Display the array using pointer notation
void displayArray(const string* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;

    // Create a dynamic string array
    string* names = new string[SIZE];

    // Populate using pointer notation
    *(names + 0) = "Janet";
    *(names + 1) = "Jeffe";
    *(names + 2) = "Jin";
    *(names + 3) = "Joe";
    *(names + 4) = "Junio";

    cout << "Original array: ";
    displayArray(names, SIZE);

    // Reverse the array
    names = reverseArray(names, SIZE);

    cout << "\nReversed array: ";
    displayArray(names, SIZE);

    // Free dynamic memory
    delete[] names;
    names = nullptr;

    return 0;
}
