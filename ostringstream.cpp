#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int seq_no = 17;

    ostringstream name;
    name << "myfile" << seq_no << ".log";

    cout << name.str() << "\n";

    return 0;
}
