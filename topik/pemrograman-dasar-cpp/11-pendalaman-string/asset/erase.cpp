#include <cstdio>
#include <string>
using namespace std;

int main() {
  string s = "Pak Dengklek berternak";
  s.erase(1, 3);

  printf("%s\n", s.c_str()); // PDengklek berternak
}
