#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cout << "Masukkan angka (contoh: 0x43 0123 65):\n";

    string token;

    while (cin >> token) {
        int nilai;

        if (token.size() > 2 && token[0] == '0' &&
            (token[1] == 'x' || token[1] == 'X')) {
            nilai = stoi(token, nullptr, 16);
            cout << token << " hexadecimal converts to "
                 << nilai << " decimal\n";
        }
        else if (token.size() > 1 && token[0] == '0') {
            nilai = stoi(token, nullptr, 8);
            cout << token << " octal converts to "
                 << nilai << " decimal\n";
        }
        else {
            nilai = stoi(token);
            cout << token << " decimal converts to "
                 << nilai << " decimal\n";
        }
    }

    return 0;
}
