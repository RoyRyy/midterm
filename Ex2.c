#include<stdio.h>
#include<malloc.h>
int main(){
    int m=0,n=0,i,j;
    printf("请输入二维数组的行数与列数：");
    scanf("%d,%d",&m,&n);
    int (*p)[n]=(int(*)[n])malloc(sizeof(int)*m*n);
    for( i=0;i<m;++i){
        for( j=0;j<n;++j){
            p[i][j]=0;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]=%d\t",i,j,p[i][j]);
            if(j%n==0){
                printf("\n");
            }
        }
    }
    free(p);
    return 0;
}
