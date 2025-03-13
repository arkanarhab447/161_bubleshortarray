#include <iostream>
#include <string>
using namespace std;

<<<<<<< HEAD
int arr[20];   // Array to store elements
int n;

void input() { // Procedure for input
=======
int arr[20];   // Array untuk menyimpan elemen
int n;

void input() { // Prosedur input
>>>>>>> 9cf98d614e310383b6da0c7f30cfbd0687c7d578
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
<<<<<<< HEAD
    int pass = 1; // Step 1
    do {
        for (int j = 0; j < n - pass; j++) { // Step 2
            if (arr[j] > arr[j + 1]) { // Step 3: Compare adjacent elements
=======
    int pass = 1; // Langkah 1
    do {
        for (int j = 0; j < n - pass; j++) { // Langkah 2
            if (arr[j] > arr[j + 1]) { // Langkah 3: Bandingkan elemen berdekatan
>>>>>>> 9cf98d614e310383b6da0c7f30cfbd0687c7d578
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
<<<<<<< HEAD
        pass = pass + 1; // Step 4
    } while (pass <= n - 1); // Step 5
    //teat
}

void printArray() { // Optional: To print the sorted array
=======
        pass = pass + 1; // Langkah 4
    } while (pass <= n - 1); // Langkah 5
}

void printArray() { // Fungsi untuk mencetak array yang sudah diurutkan
>>>>>>> 9cf98d614e310383b6da0c7f30cfbd0687c7d578
    cout << "\nArray setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
<<<<<<< HEAD
    input(); // Call the input function
    bubbleSortArray(); // Call bubble sort function
    printArray(); // Print the sorted array
    return 0;
}
=======
    input(); // Memanggil fungsi input
    bubbleSortArray(); // Memanggil fungsi bubble sort
    printArray(); // Mencetak array yang sudah diurutkan
    return 0
    ;
    
}
int main ();

>>>>>>> 9cf98d614e310383b6da0c7f30cfbd0687c7d578
