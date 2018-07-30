#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);

  int tabel[N];

  for (int i = 0; i < N; i++) {
    scanf("%d", &tabel[i]);
  }

  for (int i = N-1; i >= 0; i--) {
    printf("%d\n", tabel[i]);
  }
}
