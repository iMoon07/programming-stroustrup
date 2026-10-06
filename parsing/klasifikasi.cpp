#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string teks;

    cout << "Masukkan teks: ";
    getline(cin, teks);

    for (char c : teks) {
        cout << c << " -> ";

        if (isspace(c)) cout << "whitespace ";
        if (isalpha(c)) cout << "letter ";
        if (isdigit(c)) cout << "digit ";
        if (isalnum(c)) cout << "alphanumeric ";
        if (isupper(c)) cout << "uppercase ";
        if (islower(c)) cout << "lowercase ";
        if (ispunct(c)) cout << "punctuation ";

        cout << "\n";
    }

    return 0;
}
