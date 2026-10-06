#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string teks;
    cout << "Masukkan teks: ";
    getline(cin, teks);

    int huruf = 0;
    int digit = 0;
    int spasi = 0;
    int lain = 0;

    for (char ch : teks) {
        if (isspace(ch)) {
            spasi++;
        }
        else if (isdigit(ch)) {
            digit++;
        }
        else if (isalpha(ch)) {
            huruf++;
        }
        else {
            lain++;
        }
    }

    cout << "Huruf : " << huruf << "\n";
    cout << "Digit : " << digit << "\n";
    cout << "Spasi : " << spasi << "\n";
    cout << "Lain  : " << lain << "\n";

    return 0;
}
