#include <stdio.h>
#include <string.h>
void main() {
  int i, j, dl, count = 0;
  char s[20];
  printf("Enter string: ");
  gets(s);
  dl = strlen(s);
  for (i = 2; i < dl; i += 4) {
    for (j = i; j < 2 + i; j++) {
      if (s[j] == '1')
        count++;
    }
  }
  printf("No of 1's present in the string is %d\n", count);
}