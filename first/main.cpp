#include <iostream>

using namespace std;
int main() {
    int p, tp;
    double pPerc, tpPerc;

    cout << "P:";
    cin >> p;
    cout << "pPerc:";
    cin >> pPerc;

    cout << "T:";
    cin >> tp;
    cout << "tpPerc:";
    cin >> tpPerc;

    double final = pPerc * p + tpPerc * tp;
    cout << "Final grade: " << final << endl;
    return 0;
}
