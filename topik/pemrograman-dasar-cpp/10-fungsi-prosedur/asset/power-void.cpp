#include <cstdio>

void pangkat(int a, int b, int &hasil) {
  hasil = 1;
  for (int i = 0; i < b; i++) {
    hasil *= a;
  }
}

int main() {
  printf("%d\n", pangkat(5, 3));
}