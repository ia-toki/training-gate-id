#include <cstdio>
#include <string>
using namespace std;

int kubik(int x) {
  return x*x*x;
}

int main() {
  int volume = kubik(3);
  int selisih = volume - kubik(2);
  printf("4 kubik adalah %d\n", kubik(4));
}