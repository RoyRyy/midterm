#include <stdio.h>
char q,w,e,r,t,y,u,m,o,p;
int a[10];
int i,j;
int temp;
int main(){
printf("请输入10个整数：\n");
while((q=getchar())!='\n'){
a[0]=a[0]*10+(q-'0');}
while((w=getchar())!='\n'){
a[1]=a[1]*10+(w-'0');}
while((e=getchar())!='\n'){
a[2]=a[2]*10+(e-'0');}
while((r=getchar())!='\n'){
a[3]=a[3]*10+(r-'0');}
while((t=getchar())!='\n'){
a[4]=a[4]*10+(t-'0');}
while((y=getchar())!='\n'){
a[5]=a[5]*10+(y-'0');}
while((u=getchar())!='\n'){
a[6]=a[6]*10+(u-'0');}
while((m=getchar())!='\n'){
a[7]=a[7]*10+(m-'0');}
while((o=getchar())!='\n'){
a[8]=a[8]*10+(o-'0');}
while((p=getchar())!='\n'){
a[9]=a[9]*10+(p-'0');}
//for(i=0;i<10;i++){
  //  printf("%d\n",a[i]);}
for(j=0;j<9-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;}
}
printf("The max is：");
printf("%d ",a[9]);
printf("\n");
return 0;
}

