#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);

  int i = 0;
  do {
    printf("tulisan ini dicetak saat i = %d\n", i);
    i++;
  } while (i < N);
  printf("akhir dari program\n");
}
