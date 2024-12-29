#include <iostream>
#include <string>
using namespace std;

int main() {
    int A = 364 * 79;
    int B = 243 * 99;
    int C = 189 * 155;

    string terbesar, terkecil;

    if (A > B && A > C) {
        // jika A lebih besar dari B dan C, maka A terbesar
        terbesar = "A";

        // cari yang terkecil, yakni yang lebih kecil antara B dan C
        if (B < C) {
            terkecil = "B";
        } else {
            terkecil = "C";
        }
    } else if (...) {
        // jika B lebih besar dari A dan C, maka B terbesar
        terbesar = "B";

        // cari yang terkecil, yakni yang lebih kecil antara A dan C
        if (...) {
            terkecil = "A";
        } else {
            terkecil = "C";
        }
    } else {
        // sampai sini, maka C terbesar
        terbesar = "C";

        // cari yang terkecil, yakni yang lebih kecil antara A dan B
        ...
    }

    cout << terbesar << endl;
    cout << terkecil << endl;
}
