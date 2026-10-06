#include <fstream>
#include <iostream>
using namespace std;

int main() {
    int angka = 1234;

    // Tulis sebagai biner
    ofstream out("angka.bin", ios::binary);
    if (!out) {
        cout << "Gagal membuat file\n";
        return 1;
    }

    out.write(reinterpret_cast<char*>(&angka), sizeof(angka));
    out.close();

    // Baca kembali sebagai biner
    int hasil = 0;

    ifstream in("angka.bin", ios::binary);
    if (!in) {
        cout << "Gagal membaca file\n";
        return 1;
    }

    in.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    in.close();

    cout << "Nilai yang dibaca: " << hasil << "\n";

    return 0;
}
