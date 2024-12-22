#include <iostream>
using namespace std;

int main() {
    for (int luas = 100000; luas <= 200000; luas++) {
        // Jika luas ini bukan bilangan genap, iterasi ini bisa dihentikan
        // (dilewati), karena luas ini pasti tidak memenuhi syarat.
        if (...) {
            ...;
        }
        
        // Sekarang, kita akan cek apakah luas ini merupakan bilangan kuadrat sempurna.
        bool kuadrat_sempurna = false;

        for (int k = 1; k <= luas; k++) {
            // Jika luas adalah tepat k * k,
            // maka luas ini merupakan bilangan kuadrat sempurna.
            if (...) {
                ...;
            }
        }

        if (kuadrat_sempurna) {
            // Kita telah menemukan luas terkecil yang memenuhi seluruh syarat.

            // Cetak luas ini.
            ...;

            // Kita tidak perlu lagi melanjutkan perulangan.
            ...;
        }
    }
}
