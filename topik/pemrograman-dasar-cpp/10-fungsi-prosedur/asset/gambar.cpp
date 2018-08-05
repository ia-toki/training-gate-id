#include <cstdio>
#include <string>
using namespace std;

void gambar(int x) {
  for (int i = 0; i < x; i++) {
    printf("*");
  }
  printf("\n");
}

int main() {
  gambar(2);
  gambar(3);
}