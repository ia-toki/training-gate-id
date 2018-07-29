#include <cstdio>

int a, b, c, x, hasil;

int main() {
  scanf("%d %d %d %d", &a, &b, &c, &x);

  hasil = a*x*x + b*x + c;
  printf("ax^2 + bx + c = %d\n", hasil);
}
