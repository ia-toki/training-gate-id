#include <cstdio>

int main() {
  int N, M;
  scanf("%d %d", &N, &M);

  int i = 0;
  while (i < N) {
    int j = 0;
    while (j < M) {
      printf("*");
      j++;
    }
    i++;
    printf("\n");
  }
}
