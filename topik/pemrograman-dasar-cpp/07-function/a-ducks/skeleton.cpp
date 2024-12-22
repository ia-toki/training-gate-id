#include <iostream>
using namespace std;

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        int harga_bebek;

        // hitung biaya membeli bebek-bebek jantan
        if (jantan[i] < 10) {
            harga_bebek = 100000;
        } else if (...) {
            harga_bebek = ...;
        } else {
            harga_bebek = ...;
        }
        int biaya_jantan = ...;

        // hitung biaya membeli bebek-bebek betina
        if (betina[i] ...) {
            harga_bebek = ...;
        } else if (...) {
            harga_bebek = ...;
        } else {
            harga_bebek = ...;
        }
        int biaya_betina = ...;

        // cetak total biaya
        cout << biaya_jantan + biaya_betina << endl;
    }
}
