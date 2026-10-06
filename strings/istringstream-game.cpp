#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string baris = "user=moon score=250 level=3";

    istringstream ss(baris);

    string token;
    string user;
    int score = 0;
    int level = 0;

    while (getline(ss, token, ' ')) {
        if (token.empty()) continue;

        size_t pos = token.find('=');
        if (pos == string::npos) continue;

        string key = token.substr(0, pos);
        string value = token.substr(pos + 1);

        if (key == "user") {
            user = value;
        }
        else if (key == "score") {
            istringstream konversi(value);
            konversi >> score;
        }
        else if (key == "level") {
            istringstream konversi(value);
            konversi >> level;
        }
    }

    cout << "User : " << user << "\n";
    cout << "Skor : " << score << "\n";
    cout << "Level: " << level << "\n";

    return 0;
}
