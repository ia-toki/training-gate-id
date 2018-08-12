#include <cstdio>
#include <string>
using namespace std;

int main() {
  string s = "Pak Dengklek berternak";
  string t1 = "Dengklek";
  string t2 = "pak";
  string t3 = "klek";

  printf("%d\n", s.find(t1)); // Mencetak 4
  printf("%d\n", s.find(t2)); // Mencetak 0
  printf("%d\n", s.find(t3)); // Mencetak 9
}
