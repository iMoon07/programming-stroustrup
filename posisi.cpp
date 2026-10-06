#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Buat file contoh
    {
        ofstream out("huruf.txt");
        out << "ABCDEFGH";
    }

    // 2. Buka untuk baca dan tulis
    fstream file("huruf.txt", ios::in | ios::out);
    if (!file) {
        cout << "Gagal membuka file\n";
        return 1;
    }

    char ch;

    // Pindah ke posisi 5, lalu baca 1 karakter
    file.seekg(5);
    file.get(ch);

    cout << "Karakter di posisi 5: " << ch << "\n";
    cout << "Posisi baca sekarang: " << file.tellg() << "\n";

    // Pindah ke posisi 1, lalu timpa dengan 'y'
    file.seekp(1);
    file.put('y');

    file.close();

    // 3. Tampilkan hasil akhir
    ifstream baca("huruf.txt");
    string isi;
    getline(baca, isi);

    cout << "Isi file sekarang: " << isi << "\n";

    return 0;
}
