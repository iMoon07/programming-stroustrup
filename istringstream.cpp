#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string teks = "12.4";

    istringstream is(teks);

    double angka;
    is >> angka;

    cout << "Angka + 1 = " << angka + 1 << "\n";

    return 0;
}
