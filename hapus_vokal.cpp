#include <fstream>
#include <iostream>
#include <string>
using namespace std;

bool vokal(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' ||
           c == 'o' || c == 'u';
}

int main() {
    ifstream in("input.txt");
    ofstream out("tanpa_vokal.txt");

    if (!in) {
        cout << "Gagal membuka input.txt\n";
        return 1;
    }

    string baris;

    while (getline(in, baris)) {
        for (char c : baris) {
            if (!vokal(c)) {
                out << c;
            }
        }
        out << "\n";
    }

    cout << "Selesai. Cek tanpa_vokal.txt\n";
    return 0;
}
