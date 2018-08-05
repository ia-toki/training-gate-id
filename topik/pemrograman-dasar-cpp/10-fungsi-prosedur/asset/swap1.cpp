#include <cstdio>

void tukar(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int x = 1;
  int y = 2;
  tukar(x, y);
  printf("x=%d y=%d\n", x, y);
}