#include <iostream>
using namespace std;

int main() {
    int luas[5];

    luas[0] = 225 * 335;
    luas[1] = 215 * 394;
    luas[2] = 198 * 400;
    luas[3] = 314 * 298;
    luas[4] = 299 * 278;

    // Buat sebuah variabel yang menampung luas terbesar.
    // Pada awalnya, isi variabel tersebut dengan luas dari kandang pertama.
    ...

    // Untuk setiap kandang sisanya:
    for (int i = 1; i < 5; i++) {
        // Jika luasnya lebih besar daripada variabel luas terbesar:
        if (...) {
            // Perbarui nilai variabel luas terbesar dengan luas kandang tersebut.
            ...
        }
    }

    cout << ... << endl;
}
