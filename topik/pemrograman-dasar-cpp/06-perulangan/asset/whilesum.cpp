#include <cstdio>

int main() {
  int awal, akhir;
  scanf("%d %d", &awal, &akhir);

  int jumlah = 0;
  int i = awal;
  while (i <= akhir) {
    jumlah += i;
    i++;
  }
  printf("jumlah bilangan bulat di antara %d dan %d (inklusif) adalah %d\n", awal, akhir, jumlah);
}
