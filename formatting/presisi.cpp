#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double angka = 1234567.89;

    cout << "Tanpa mengatur presisi:\n";
    cout << defaultfloat << angka << "\t(defaultfloat)\n";
    cout << fixed << angka << "\t(fixed)\n";
    cout << scientific << angka << "\t(scientific)\n";

    cout << "\nPresisi 5:\n";
    cout << defaultfloat << setprecision(5) << angka << "\t(defaultfloat)\n";
    cout << fixed << angka << "\t(fixed)\n";
    cout << scientific << angka << "\t(scientific)\n";

    cout << "\nPresisi 8:\n";
    cout << defaultfloat << setprecision(8) << angka << "\t(defaultfloat)\n";
    cout << fixed << angka << "\t(fixed)\n";
    cout << scientific << angka << "\t(scientific)\n";

    return 0;
}
