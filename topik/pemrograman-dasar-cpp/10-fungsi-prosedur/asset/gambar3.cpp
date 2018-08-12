#include <cstdio>
#include <string>
using namespace std;

void gambar(int x) {
  if (x > 1000) {
    return;
  }
  for (int i = 0; i < x; i++) {
    printf("*");
  }
  printf("\n");
}

int main() {
  int n;
  scanf("%d", &n);
  gambar(n);
}