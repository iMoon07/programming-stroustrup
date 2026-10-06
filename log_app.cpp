#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream log("program.log", ios::app);

    if (!log) {
        cout << "Gagal membuka log\n";
        return 1;
    }

    log << "Program dijalankan\n";

    return 0;
}
