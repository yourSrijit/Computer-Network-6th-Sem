#include <stdio.h>
#include <string.h>
void main() {
  int i = 0, count = 0;
  char s[20];
  printf("Enter the string: ");
  gets(s);
  while (s[i] != '\0') {
    if (s[i] == '1')
      count++;
    i++;
  }
  printf("\nNo of 1's present in this string is %d", count);
}