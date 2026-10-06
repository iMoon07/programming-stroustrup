#include <iostream>
using namespace std;

int main() {
    cout << 1234 << "\t(decimal)\n"
         << hex << 1234 << "\t(hexadecimal)\n"
         << oct << 1234 << "\t(octal)\n";

    // Bukti bahwa oct masih "sticky"
    cout << 1234 << '\n'; // ini tetap dicetak sebagai oktal

    // Kembalikan ke desimal
    cout << dec << 1234 << '\n';

    return 0;
}
