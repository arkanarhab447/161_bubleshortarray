#include <iostream>
#include <string>
using namespace std;

int arr[20];   // Array untuk menyimpan elemen
int n;

void input() { // Prosedur input
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
    int pass = 1; // Langkah 1
    do {
        for (int j = 0; j < n - pass; j++) { // Langkah 2
            if (arr[j] > arr[j + 1]) { // Langkah 3: Bandingkan elemen berdekatan
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; // Langkah 4
    } while (pass <= n - 1); // Langkah 5
}

void printArray() { // Fungsi untuk mencetak array yang sudah diurutkan
    cout << "\nArray setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    input(); // Memanggil fungsi input
    bubbleSortArray(); // Memanggil fungsi bubble sort
    printArray(); // Mencetak array yang sudah diurutkan
    return 0
    ;
    
}
int main ();

