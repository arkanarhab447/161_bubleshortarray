#include <iostream>
#include <string>
using namespace std;

int arr[20];   // Array to store elements
int n;

void input() { // Procedure for input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> n;
        if (n <= 20) {
            break;
        } else {
            cout << "\nArray maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> arr[i];
    }
}

void bubbleSortArray() {
    int pass = 1; // Step 1
    do {
        for (int j = 0; j < n - pass; j++) { // Step 2
            if (arr[j] > arr[j + 1]) { // Step 3: Compare adjacent elements
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; // Step 4
    } while (pass <= n - 1); // Step 5
    //teat
}

void printArray() { // Optional: To print the sorted array
    cout << "\nArray setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    input(); // Call the input function
    bubbleSortArray(); // Call bubble sort function
    printArray(); // Print the sorted array
    return 0;
}