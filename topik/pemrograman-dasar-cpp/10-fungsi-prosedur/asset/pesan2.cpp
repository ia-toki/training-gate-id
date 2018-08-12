#include <cstdio>
#include <string>
using namespace std;

char buff[1001];
string pesan;

// Program utama
int main() {
  printf("masukkan pesan: \n");
  scanf("%s", buff);
  pesan = buff;
  printf("pesan = %s\n", pesan.c_str());
}