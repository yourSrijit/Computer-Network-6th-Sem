#include <stdio.h>
void main() {
  char s[20];
  int i = 0, alpha = 0, digits = 0, bin = 0;
  printf("Enter a string: ");
  gets(s);
  while (s[i++] != '\0') {
    if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
      alpha++;
    else if (s[i] == '0' || s[i] == '1')
      bin++;
    else if (s[i] >= '0' && s[i] <= '9')
      digits++;
  }

  if (digits == 0 && bin == 0 && alpha != 0)
    printf("Only alphabets\n");
  else if (bin != 0 && digits == 0 && alpha == 0)
    printf("Only 1s and 0s\n");
  else if (bin != 0 && digits != 0 && alpha == 0)
    printf("Only digits\n");
  else
    printf("none of them\n");
}