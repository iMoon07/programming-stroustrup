#include <fstream>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    if (!in) {
        cout << "Gagal membuka input.txt\n";
        return 1;
    }

    string baris;

    while (getline(in, baris)) {
        for (char& c : baris) {
            c = tolower(c);
        }
        out << baris << "\n";
    }

    cout << "Selesai. Cek output.txt\n";
    return 0;
}
