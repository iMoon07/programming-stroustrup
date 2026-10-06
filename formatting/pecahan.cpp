#include <iostream>
using namespace std;

int main() {
    cout << 1234.56789 << "\t\t(defaultfloat)\n"
         << fixed << 1234.56789 << "\t(fixed)\n"
         << scientific << 1234.56789 << "\t(scientific)\n";

    cout << "\nBukti scientific menempel:\n";
    cout << 1234.56789 << '\n';

    cout << "\nKembali ke default:\n";
    cout << defaultfloat << 1234.56789 << '\t'
         << fixed << 1234.56789 << '\t'
         << scientific << 1234.56789 << '\n';

    return 0;
}
