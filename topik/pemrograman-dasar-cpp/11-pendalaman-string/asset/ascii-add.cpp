#include <cstdio>
#include <string>
using namespace std;

int main() {
  string s = "abc";
  s[0]++;
  s[1] += 2;
  s[2] -= 2;
  printf("%s\n", s.c_str());
}
