#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    int d;

    cin.unsetf(ios::dec);
    cin.unsetf(ios::oct);
    cin.unsetf(ios::hex);

    cout << "Masukkan 4 angka: ";
    cin >> a >> b >> c >> d;

    cout << a << '\t'
         << b << '\t'
         << c << '\t'
         << d << '\n';

    return 0;
}
