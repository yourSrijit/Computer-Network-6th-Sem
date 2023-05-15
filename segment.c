#include <stdio.h>
#include <string.h>
void main() {
  char data[20], data1[20];
  int sl, i, j, c, d = 1, f = 0;
  printf("Enter the string: ");
  gets(data);
  printf("Enter the segment length: ");
  scanf("%d", &sl);
  int dl = strlen(data);
  printf("Data length is %d", dl);
  if (dl % sl) {
    i = sl - (dl % sl);
    for (j = 0; j < i; j++)
      data1[j] = '0';
    data1[j] = '\0';
    strcat(data1, data);
    strcpy(data, data1);
    dl = dl + i;
  }
  printf("The new string is: ");
  puts(data);
  printf("Updated length: %d\n", dl);
  for (i = 0; i < dl; i += sl) {
    c = 0;
    while (c < sl) {
      data1[c] = data[i + c];
      c++;
    }
    data1[c] = '\0';
    printf("Segment %d: %s\n", d, data1);
    d++;
  }
  printf("Frequency: \n");
  d = 1;
  for (i = 0; i < dl; i += sl) {
    f = 0;
    c = 0;
    while (c < sl) {
      if (data[i + c] == '1')
        f++;
      c++;
    }
    printf("Segment %d: %d\n", d, f);
    d++;
  }
}