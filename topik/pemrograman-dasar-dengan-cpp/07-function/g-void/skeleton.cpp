#include <iostream>
using namespace std;

int total_kandang = 10;

// bebek[i] menyatakan banyaknya bebek pada kandang nomor i.
int bebek[11];

void kosongkan_kandang() {
    for (int i = 1; i <= total_kandang; i++) {
        bebek[i] = 0;
    }
}

// Buat fungsi isi_bebek_ke_dalam_kandang() di sini.
...

int bebek_terbanyak_dalam_suatu_kandang() {
    int bebek_terbanyak = bebek[1];
    for (int i = 2; i <= total_kandang; i++) {
        bebek_terbanyak = max(..., ...);
    }
    return ...;
}

int main() {
    kosongkan_kandang();

    isi_bebek_ke_dalam_kandang(1, 8, 2);
    isi_bebek_ke_dalam_kandang(2, 9, 10);
    isi_bebek_ke_dalam_kandang(5, 6, 2);
    isi_bebek_ke_dalam_kandang(9, 10, 3);
    isi_bebek_ke_dalam_kandang(1, 4, 7);
    isi_bebek_ke_dalam_kandang(1, 4, 2);
    isi_bebek_ke_dalam_kandang(4, 8, 6);

    cout << bebek_terbanyak_dalam_suatu_kandang() << endl;
}
