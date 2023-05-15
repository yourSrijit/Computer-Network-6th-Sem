#include <stdio.h>
#include <string.h>
void main() {
  char dw[20], m;
  int i = 0, count = 0;
  printf("Enter the dataword: ");
  gets(dw);
  while (dw[i] != '\0') {
    if (dw[i] == '1')
      count++;
    i++;
  }
  printf("\nTotal 1's present in the dataword is %d", count);
  printf("\nEnter mode of parity: e: even and o: odd: ");
  scanf("%c", &m);
  switch (m) {
  case 'e':
    if (count % 2 == 0)
      strcat(dw, "0");
    else
      strcat(dw, "1");
    printf("\nThe codeword in even parity is %s\n", dw);
    break;
  case 'o':
    if (count % 2 == 0)
      strcat(dw, "1");
    else
      strcat(dw, "0");
    printf("\nThe codeword in odd parity is %s\n", dw);
    break;
  default:
    printf("Choose correctly...");
  }
}