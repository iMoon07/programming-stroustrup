#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;

    // Tulis ke stringstream
    ss << "Skor: " << 100;

    // Ambil hasilnya sebagai string
    string pesan = ss.str();
    cout << pesan << "\n";

    // Baca angka dari string lain
    stringstream data("100 200 300");
    int a, b, c;
    data >> a >> b >> c;

    cout << a + b + c << "\n";

    return 0;
}
