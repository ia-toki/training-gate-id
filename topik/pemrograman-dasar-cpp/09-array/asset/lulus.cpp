#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);

  int nilai[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &nilai[i]);
  }

  int total = 0;
  for (int i = 0; i < N; i++) {
    total += nilai[i];
  }

  int lulus = 0;
  for (int i = 0; i < N; i++) {
    // Trik menghindari pembagian
    if (nilai[i]*N >= total) {
      lulus++;
    }
  }

  printf("%d\n", lulus);
}
