#include <iostream>
using namespace std;

int main() {
    bool lampu[101];

    // Pada mulanya, seluruh lampu dalam kondisi mati.
    for (int i = 1; i <= 100; i++) {
        lampu[i] = false;
    }

    // Untuk setiap jam (pukul p),
    for (int p = ...) {
        // untuk setiap lampu nomor i,
        for (int i = ...) {
            // jika i merupakan kelipatan p,
            if (...) {
                // tekan saklarnya.
                lampu[i] = ...;
            }
        }
    }

    // Hitung banyaknya lampu yang menyala,
    ...

    // lalu cetak.
    ...
}
