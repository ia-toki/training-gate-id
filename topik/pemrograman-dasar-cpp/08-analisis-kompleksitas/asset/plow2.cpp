#include <cstdio>
#include <cmath>

using namespace std;

int main() {
  int N, R, C;
  scanf("%d", &N);
  R = 1;
  C = N;
  for (int i = 1; i <= N; i++) {
    if (N % i == 0) {
      int j = N / i;
      if (abs(R-C) > abs(i-j)) {
        R = i;
        C = j;
      }
    }
  }
  printf("%d %d\n", R, C);
}