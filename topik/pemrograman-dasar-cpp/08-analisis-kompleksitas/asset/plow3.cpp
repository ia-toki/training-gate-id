#include <cstdio>
#include <cmath>

using namespace std;

int main() {
  int N, R, C;
  scanf("%d", &N);
  R = 1;
  C = N;

  int i = 1;
  while (i*i <= N) {
    if (N % i == 0) {
      int j = N / i;
      if (abs(R-C) > abs(i-j)) {
        R = i;
        C = j;
      }
    }
    i++;
  }
  printf("%d %d\n", R, C);
}
