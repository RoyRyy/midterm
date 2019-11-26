#include <stdio.h>
int main()
{
int a[10];
int i,j;
int temp;
printf("请输入10个整数：");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0;i<9;i++){
for(j=0;j<9-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;}
}
}
printf("The max is：");
printf("%d ",a[9]);
printf("\n");
return 0;
}
