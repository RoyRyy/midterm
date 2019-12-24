#include<stdio.h>
main()
{
  unsigned long int i=1;
  int m=0;
  do
  {
    i=i<<1;
   if(m>-1)
    m++;
  }
  while(i!=0);
  printf("unsianed long int is of %d bit, the max is %lu , the min is %lu ",m,i-1,i);
}
