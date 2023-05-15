#include <stdio.h>
#include <string.h>
void main() {
  char cw[50], div[20], temp[50];
  printf("Enter the codeword: ");
  gets(cw);
  printf("Enter the divisor: ");
  gets(div);
  int cl = strlen(cw), divl = strlen(div), i, j, flag = 0;
  for (i = 0; i < cl - divl + 1; i++) // length of the dataword
    temp[i] = cw[i];
  temp[i] = '\0';

  for (i = 0; i < cl - divl + 1; i++) {
    if (cw[i] == '1') {
      for (j = 0; j < divl; j++)
        cw[i + j] = (cw[i + j] == div[j]) ? '0' : '1';
    }
  }
  printf("The remainder is: ");
  for (i = cl - divl + 1; i < strlen(cw); i++)
    printf("%c", cw[i]);

  printf("\nThe codeword is: ");
  puts(temp);

  for (i = 0; i < strlen(cw); i++) {
    if (cw[i] == '1') {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("Dataword received successfully\n");
  else
    printf("Dataword rejected\n");
}