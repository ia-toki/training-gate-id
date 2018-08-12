#include <cstdio>
#include <string>
using namespace std;

int main() {
  string s = "Pak Dengklek berternak";

  printf("%s\n", s.substr(0, 6).c_str()); // Pak De
  printf("%s\n", s.substr(2, 1).c_str()); // k
}
