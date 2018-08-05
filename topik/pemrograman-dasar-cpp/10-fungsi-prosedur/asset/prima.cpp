#include <cstdio>
#include <string>
using namespace std;

bool prima(int x) {
  if (x < 2) {
    return false;
  }
  for (int i = 2; i*i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  printf("%d\n", prima(1));
  printf("%d\n", prima(2));
  printf("%d\n", prima(3));
  printf("%d\n", prima(4));
  printf("%d\n", prima(5));
}