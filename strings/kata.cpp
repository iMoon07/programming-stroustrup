#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string line;

    cout << "Masukkan kalimat:\n";
    getline(cin, line);

    // Ganti tanda baca jadi spasi
    for (char& ch : line) {
        if (ch == ';' || ch == '.' || ch == ',' ||
            ch == '?' || ch == '!') {
            ch = ' ';
        }
    }

    // Pecah jadi kata
    stringstream ss(line);
    vector<string> kata;

    for (string word; ss >> word; ) {
        kata.push_back(word);
    }

    // Urutkan kata
    sort(kata.begin(), kata.end());

    // Cetak tanpa duplikat
    cout << "\nHasil:\n";
    for (size_t i = 0; i < kata.size(); i++) {
        if (i == 0 || kata[i] != kata[i - 1]) {
            cout << kata[i] << "\n";
        }
    }

    return 0;
}
