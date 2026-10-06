#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left
         << setw(15) << "Belakang"
         << setw(15) << "Depan"
         << setw(15) << "Telepon"
         << setw(30) << "Email"
         << "\n";

    cout << string(75, '-') << "\n";

    cout << left
         << setw(15) << "Moon"
         << setw(15) << "Kamu"
         << setw(15) << "08123456789"
         << setw(30) << "moon@example.com"
         << "\n";

    cout << left
         << setw(15) << "Sugiono"
         << setw(15) << "Budi"
         << setw(15) << "08129876543"
         << setw(30) << "budi@example.com"
         << "\n";

    cout << left
         << setw(15) << "Santoso"
         << setw(15) << "Andi"
         << setw(15) << "08121112223"
         << setw(30) << "andi@example.com"
         << "\n";

    cout << left
         << setw(15) << "Wijaya"
         << setw(15) << "Rizky"
         << setw(15) << "08125556667"
         << setw(30) << "rizky@example.com"
         << "\n";

    cout << left
         << setw(15) << "Pratama"
         << setw(15) << "Fajar"
         << setw(15) << "08123334445"
         << setw(30) << "fajar@example.com"
         << "\n";

    cout << left
         << setw(15) << "Hidayat"
         << setw(15) << "Dimas"
         << setw(15) << "08127778889"
         << setw(30) << "dimas@example.com"
         << "\n";

    return 0;
}
