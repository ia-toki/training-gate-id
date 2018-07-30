#include <cstdio>

int main() {
  int awal, akhir;
  scanf("%d %d", &awal, &akhir);

  int jumlah = 0;
  for (int i = awal; i <= akhir; i++) {
    jumlah += i;
  }
  printf("jumlah bilangan bulat di antara %d dan %d (inklusif) adalah %d\n", awal, akhir, jumlah);
}
