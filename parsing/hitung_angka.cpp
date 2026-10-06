#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> jumlah;
    int angka;

    cout << "Masukkan angka (Ctrl+D untuk selesai):\n";

    while (cin >> angka) {
        jumlah[angka]++;
    }

    cout << "\nHasil:\n";

    for (const auto& [nilai, banyak] : jumlah) {
        cout << nilai << " " << banyak << "\n";
    }

    return 0;
}
