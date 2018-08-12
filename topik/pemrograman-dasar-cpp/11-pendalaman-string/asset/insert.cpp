#include <cstdio>
#include <string>
using namespace std;

int main() {
  string s = "Pak Dengklek berternak";
  string t = "dan Bu ";

  s.insert(4, t);
  printf("%s\n", s.c_str()); // Pak dan Bu Dengklek berternak
}
