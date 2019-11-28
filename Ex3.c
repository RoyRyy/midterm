#include<stdio.h>
int main(){
    unsigned long int a=1;
    int count=0;
    while(a!=0){
        a=a<<1;
        count++;
    }
 printf("unsigned long int is size of %d bit.The max is %lu,the min is %lu",count,a-1,a);
}