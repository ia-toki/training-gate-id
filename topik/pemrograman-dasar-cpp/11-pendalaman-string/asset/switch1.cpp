#include <cstdio>

char s[1001];

int main() {
  scanf("%s", s);
  for (int i = 0; s[i] != '\0'; i++) {
    s[i] = 'a';
  }
  printf("%s\n", s);
}