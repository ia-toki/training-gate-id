#include <cstdio>

char buff[1001];

int main() {
  scanf("%s", buff);
  char nilai = buff[0];

  switch (nilai) {
    case 'A':
      printf("Sempurna\n");
      break;

    case 'B':
      printf("Bagus\n");
      break;

    case 'C':
      printf("Cukup\n");
      break;

    case 'D':
      printf("Kurang\n");
      break;
  }
}

