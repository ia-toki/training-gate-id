#include <cstdio>

int main() {
  int N, M;
  scanf("%d %d", &N, &M);

  for (int i = 1; i <= N; i++) {
    if (i == M) {
      break;
    }

    printf("%d\n", i);
  }
  printf("selesai\n");
}
