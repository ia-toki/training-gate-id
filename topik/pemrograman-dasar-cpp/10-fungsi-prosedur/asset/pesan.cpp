#include <cstdio>
#include <string>
using namespace std;

char buff[1001];
string pesan;

// Subprogram
void bacaPesan() {
  printf("masukkan pesan: \n");
  scanf("%s", buff);
  pesan = buff;
}

// Program utama
int main() {
  bacaPesan();
  printf("pesan = %s\n", pesan.c_str());
}