#include <cstdio>
#include <cstring>

char s[1001];

int main() {
  const char *s = "Pak dengklek";
  const char *t = "dengklak";

  printf("%d\n", strstr(s, t) - s);
}