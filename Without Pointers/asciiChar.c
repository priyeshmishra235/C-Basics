#include<stdio.h>

int main(){

    int n;
    char ch='!';
    printf("what height patten you want?\n");
    scanf("%d",&n);

    for (int i=0;i<n;i++,printf("\n"))//new thing
        for (int j=i+1;j<=n;j++,ch++)//new thing
            printf("%c",ch);
    
    return 0;
}
