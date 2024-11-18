#include<stdio.h>

int main(){

    int n,i,j;
    printf("what height patten you want?\n");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    
    return 0;
}
