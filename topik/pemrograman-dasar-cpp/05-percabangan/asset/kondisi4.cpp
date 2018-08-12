#include <cstdio>

int main() {
  int x;
  scanf("%d", &x);
  if (x > 0) {
    printf("positif\n");
  } else if (x == 0) {
    printf("nol\n");
  } else {
    printf("negatif\n");
  }
}

