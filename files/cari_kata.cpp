#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Pemakaian: ./cari_kata file.txt kata\n";
        return 1;
    }

    ifstream file(argv[1]);
    string kata = argv[2];
    string baris;
    int nomor = 0;

    if (!file) {
        cout << "Gagal membuka " << argv[1] << "\n";
        return 1;
    }

    while (getline(file, baris)) {
        nomor++;
        if (baris.find(kata) != string::npos) {
            cout << nomor << ": " << baris << "\n";
        }
    }

    return 0;
}
