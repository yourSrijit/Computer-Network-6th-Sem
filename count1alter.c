#include <stdio.h>
#include <string.h>
void main() {
  int i, j, dl, count = 0;
  char s[20];
  printf("Enter string: ");
  gets(s);
  dl = strlen(s);
  for (i = 1; i < dl; i += 2) {
    for (j = i; j < 1 + i; j++) {
      if (s[j] == '1')
        count++;
    }
  }
  printf("No of 1's present in the string is %d\n", count);
}