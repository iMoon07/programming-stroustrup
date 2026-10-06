#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream file("catatan.txt");
    string baris;

    if (!file) {
        cout << "File tidak ada atau gagal dibuka\n";
        return 1;
    }

    while (getline(file, baris)) {
        cout << baris << "\n";
    }

    return 0;
}
