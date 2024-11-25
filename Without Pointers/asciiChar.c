#include<stdio.h>

int main(){

    int n;
    char ch='!';
    printf("what height patten you want?\n");
    scanf("%d",&n);

   for (int i=0;i<n;i++)
   {
    for (int j=i+1;j<=n;j++)
    {
        printf("%c",ch);
        ch++;
    }
    printf("\n");
   }
    
    return 0;
}
