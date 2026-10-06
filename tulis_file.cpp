#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file("catatan.txt");

    if (!file) {
        cout << "Gagal membuka file\n";
        return 1;
    }

    file << "Halo, ini baris pertama\n";
    file << "Ini baris kedua\n";

    return 0;
}
