#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string command;

    cout << "Masukkan perintah: ";
    getline(cin, command);

    stringstream ss(command);

    vector<string> words;

    for (string word; ss >> word; ) {
        words.push_back(word);
    }

    cout << "Jumlah kata: " << words.size() << "\n";

    cout << "Kata-kata:\n";
    for (const string& word : words) {
        cout << "- " << word << "\n";
    }

    return 0;
}
