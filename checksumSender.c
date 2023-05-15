#include <stdio.h>
#include <string.h>
void main() {
  char dw[50], zero[50], s[20];
  int sl = -1, p, c, l, i, j, sum = 0;
  printf("Enter dataword: ");
  gets(dw);
  while (sl % 2 != 0) {
    printf("Enter segment length: ");
    scanf("%d", &sl);
  }
  if (strlen(dw) % sl) {
    l = sl - (strlen(dw) % sl); // no of zeros to append;
    for (i = 0; i < l; i++)
      zero[i] = '0';
    zero[i] = '\0';
    strcat(zero, dw);
    printf("The new sequence: ");
    puts(zero);
  } else {
    strcpy(zero, dw);
    printf("The new sequence: ");
    puts(zero);
  }
  for (i = 0; i < sl; i++)
    s[i] = '0'; // preparing the sum array
  s[i] = '\0';
  // checksum
  for (i = 0; i < strlen(zero); i += sl) {
    c = 0, p = sl - 1;
    for (j = sl + i - 1; j >= i; j--) {
      sum = (s[p] - 48) + (zero[j] - 48) + c;
      s[p] = (char)((sum % 2) + 48);
      c = sum / 2;
      p--;
    }
  }
  // if carry
  if (c == 1) {
    for (j = sl - 1; j >= 0; j--) {
      sum = (s[j] - 48) + c;
      s[j] = (char)((sum % 2) + 48);
      c = sum / 2;
    }
  }
  for (i = sl - 1; i >= 0; i--)
    s[i] = (s[i] == '1') ? '0' : '1'; // complementing the checksum
  printf("Checksum is: ");
  puts(s);
  strcat(zero, s);
  printf("The transmitted sequence is: ");
  puts(zero);
}