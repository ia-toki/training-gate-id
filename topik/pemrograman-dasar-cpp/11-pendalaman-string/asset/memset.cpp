#include <cstdio>
#include <cstring>

char s[1001];
int arr[101];

int main() {
  memset(s, 'x', sizeof(s));
  memset(arr, -1, sizeof(arr));
  printf("%c %d\n", s[0], arr[0]);
}
