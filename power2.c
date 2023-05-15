#include <stdio.h>
void main() {
  int num, n, flag = 0;
  printf("Enter the number: ");
  scanf("%d", &num);
  /*n=num;
  while(n!=1){
    if(n%2!=0){
      flag=1;
      break;
    }
    n/=2;
  }
  if(flag==0) printf("%d is a power of 2\n",num);
  else printf("%d is not a power of 2\n",num);*/
  if ((num & (num - 1)) == 0)
    printf("%d is a power of 2\n", num);
  else
    printf("%d is not a power of 2\n", num);
}