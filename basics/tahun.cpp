#include <iostream>
using namespace std;

int main() {
    int tahun_lahir = 2005;
    int umur = 21;

    cout << "Tahun kelahiran:\n";
    cout << dec << tahun_lahir << "\t\t"
         << hex << tahun_lahir << "\t\t"
         << oct << tahun_lahir << "\n";

    cout << "\nUmur:\n";
    cout << dec << umur << "\t\t"
         << hex << umur << "\t\t"
         << oct << umur << "\n";

    cout << "\nDengan awalan basis:\n";
    cout << showbase << dec;

    cout << "Tahun: " << tahun_lahir << "\t\t"
         << hex << tahun_lahir << "\t\t"
         << oct << tahun_lahir << "\n";

    cout << "Umur:   " << dec << umur << "\t\t"
         << hex << umur << "\t\t"
         << oct << umur << "\n";

    return 0;
}
