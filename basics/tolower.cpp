#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string kata = "RigHT";

    for (char& c : kata) {
        c = tolower(c);
    }

    cout << kata << "\n";
    return 0;
}
