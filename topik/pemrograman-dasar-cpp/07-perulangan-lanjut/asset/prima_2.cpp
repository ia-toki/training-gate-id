#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);

  int count = 0; // Banyaknya prima yang sudah ditemukan
  int cur = 2; // nilai yang akan diperiksa keprimaannya

  while (count < N) {
    bool prima = true;
    for (int i = 2; i <= cur-1; i++) {
      if (cur % i == 0) {
        prima = false;
        break;
      }
    }

    if (prima) {
      // Ditemukan prima!
      // Cetak dan tambahkan prima yg sudah ditemukan
      printf("%d\n", cur);
      count++;
    }

    // Entah ini prima atau bukan, lanjut untuk
    // memeriksa bilangan berikutnya
    cur++;
  }
  // Keluar dari while, dipastikan count = N
}
