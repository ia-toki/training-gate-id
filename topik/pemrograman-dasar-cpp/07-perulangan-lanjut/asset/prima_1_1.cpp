#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);

  bool prima = true;
  for (int i = 2; i <= N-1; i++) {
    if (N % i == 0) {
      prima = false;
    }
  }

  if (prima) {
    printf("%d adalah bilangan prima\n", N);
  } else {
    printf("%d bukan bilangan prima\n", N);
  }
}
