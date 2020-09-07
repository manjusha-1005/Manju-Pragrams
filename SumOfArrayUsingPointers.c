#include <stdio.h>

int main() {
  int a[5],i,p=0,*ptr;
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  ptr=a;
  for(i=0;i<5;i++)
  {
    p=p+*ptr;
    ptr++;
  }
  
  printf(" The sum is: %d",p);
  
}