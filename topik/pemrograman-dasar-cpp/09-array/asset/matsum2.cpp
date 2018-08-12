#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);

  int hasil[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int temp;
      scanf("%d", &temp);
      hasil[i][j] = temp;
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int temp;
      scanf("%d", &temp);
      hasil[i][j] += temp;
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d", hasil[i][j]);
      if (j+1 < N) {
        printf(" ");
      }
    }
    printf("\n");
  }
}
