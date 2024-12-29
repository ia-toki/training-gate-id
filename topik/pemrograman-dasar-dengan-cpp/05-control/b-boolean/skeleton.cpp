#include <iostream>
using namespace std;

int main() {
    bool ada_yang_dijual = false;

    for (int sisi = 121; sisi <= 125; sisi++) {
        bool kelipatan_2 = sisi % 2 == 0;
        bool kelipatan_3 = sisi % 3 == 0;

        if (...) {
            ...;
        }
    }

    if (ada_yang_dijual) {
        cout << "ada" << endl;
    } else {
        cout << "tidak ada" << endl;
    }
}
