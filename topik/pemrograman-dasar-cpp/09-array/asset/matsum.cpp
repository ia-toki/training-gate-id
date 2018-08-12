#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);

  int D[N][N], G[N][N], hasil[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &D[i][j]);
    }
  }

 for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &G[i][j]);
    }
  }

 for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      hasil[i][j] = D[i][j] + G[i][j];
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
