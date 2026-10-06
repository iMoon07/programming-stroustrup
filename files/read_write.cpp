#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out);

    if (!file) {
        cout << "Gagal membuka file\n";
        return 1;
    }

    file << "Halo file\n";

    return 0;
}
