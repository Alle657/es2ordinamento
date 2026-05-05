#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45};
    int nuovoValore;

    cout << "Array iniziale:\n";
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nInserisci il 10° valore: ";
    cin >> nuovoValore;

    int i = 8;


    while (i >= 0 && arr[i] > nuovoValore) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = nuovoValore;

    cout << "\nArray dopo inserimento ordinato:\n";
    for (int j = 0; j < 10; j++) {
        cout << arr[j] << " ";
    }

    return 0;
}