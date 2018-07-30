#include <cstdio>

int main() {
  int N;
  int tabel[100];
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%d", &tabel[i]);
  }

  for (int i = N-1; i >= 0; i--) {
    printf("%d\n", tabel[i]);
  }
}
