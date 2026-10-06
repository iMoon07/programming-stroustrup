#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream file("huruf.txt", ios::binary);

    file.seekg(0, ios::end);
    streampos ukuran = file.tellg();

    cout << "Ukuran file: " << ukuran << " byte\n";

    return 0;
}
