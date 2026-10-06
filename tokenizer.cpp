#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input = "12+ab";
    vector<string> tokens;

    string angka;
    string huruf;

    for (char ch : input) {
        if (isdigit(ch)) {
            if (!huruf.empty()) {
                tokens.push_back(huruf);
                huruf.clear();
            }
            angka += ch;
        }
        else if (isalpha(ch)) {
            if (!angka.empty()) {
                tokens.push_back(angka);
                angka.clear();
            }
            huruf += ch;
        }
        else {
            if (!angka.empty()) {
                tokens.push_back(angka);
                angka.clear();
            }
            if (!huruf.empty()) {
                tokens.push_back(huruf);
                huruf.clear();
            }
            tokens.push_back(string(1, ch));
        }
    }

    if (!angka.empty()) tokens.push_back(angka);
    if (!huruf.empty()) tokens.push_back(huruf);

    for (const string& t : tokens) {
        cout << t << "\n";
    }

    return 0;
}
