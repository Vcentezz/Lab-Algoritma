#include <iostream>
using namespace std;

int main() {
    int bilangan;
    int *ptrBilangan = &bilangan;

    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    while (*ptrBilangan != 0) {
        if (*ptrBilangan % 2 == 0) {
            cout << "Genap" << endl;
        } else {
            cout << "Ganjil" << endl;
        }

        cout << "Masukkan bilangan (0 untuk berhenti): ";
        cin >> bilangan;
    }
}
