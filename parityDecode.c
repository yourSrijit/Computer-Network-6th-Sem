#include <stdio.h>
#include <string.h>
void main() {
  char cw[20], m;
  int ones = 0, i = 0;
  printf("Enter the codeword: ");
  gets(cw);
  int len = strlen(cw);
  while (cw[i] != '\0') {
    if (cw[i] == '1')
      ones++;
    i++;
  }
  printf("The codeword contains %d no of 1s\n", ones);
  printf("Which parity mode was used? even(e) or odd(o): ");
  scanf("%c", &m);
  switch (m) {
  case 'e':
    if (ones % 2 != 0)
      printf("Wrong codeword received\n");
    else {
      printf("Codeword reveived\n");
      printf("Original dataword is: \n");
      for (i = 0; i < len - 1; i++)
        printf("%c", cw[i]);
      printf("\n");
    }
    break;
  case 'o':
    if (ones % 2 == 0)
      printf("Wrong codeword received\n");
    else {
      printf("Codeword reveived\n");
      printf("Original dataword is: \n");
      for (i = 0; i < len - 1; i++)
        printf("%c", cw[i]);
      printf("\n");
    }
    break;
  default:
    printf("Choose correctly\n");
  }
}