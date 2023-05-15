#include <stdio.h>
void main() {
  char s[20];
  int count[26] = {0}, x, i = 0, j;
  printf("Enter the string: ");
  gets(s);
  while (s[i] != '\0') {
    if (s[i] >= 'a' && s[i] <= 'z') {
      x = s[i] - 'a';
      count[x]++;
    }
    i++;
  }
  for (j = 0; j < 26; j++) {
    printf("%c occurs %d times\n", j + 'a', count[j]);
  }
}