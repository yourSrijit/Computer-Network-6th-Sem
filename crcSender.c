#include <stdio.h>
#include <string.h>
void main() {
  char dw[50], temp[50], div[20];
  printf("Enter the dataword: ");
  gets(dw);
  strcpy(temp, dw);
  printf("Enter the divisor: ");
  gets(div);
  int dl = strlen(dw), divl = strlen(div), i, j;
  for (i = 0; i < divl - 1; i++)
    dw[i + dl] = '0'; // appendng zero of length divl-1
  dw[i + dl] = '\0';
  div[divl] = '\0';
  printf("The sequence after zero padding: ");
  puts(dw);
  // performing divison
  for (i = 0; i < dl; i++) {
    if (dw[i] == '0')
      continue;
    else {
      for (j = 0; j < divl; j++)
        dw[i + j] = (dw[i + j] == div[j]) ? '0' : '1';
    }
  }
  printf("CRC bit is: ");
  for (i = strlen(dw) - divl + 1; i < strlen(dw); i++)
    printf("%c", dw[i]);
  printf("\n");
  
  for (i = 0; i < dl; i++)
    dw[i] = temp[i];
  printf("Transmitted bit pattern is: ");
  puts(dw);
}