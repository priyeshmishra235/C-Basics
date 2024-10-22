#include<stdio.h>

int main()
{
//Taking Input
    int n,i,j;
    printf("what height star patten you want?\n");
    scanf("%d",&n);

//Full Standing Pyramid Pattern
    printf("\nFull Standing Pyramid Pattern\n\n");
    for(i=n;i>0;i--){
        for(j=i-1;j>0;j--){
            printf(" ");
        }
        for(j=i;j<=n;j++){
            printf("* "); 
        }
        printf("\n"); 
    }
    printf("\n");

//Full Inverted Pyramid Pattern
    printf("Full Inverted Pyramid Pattern\n\n");
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            printf("* "); 
        }
        printf("\n");
        for(j=n-i;j>=0;j--){
            printf(" ");
        }
    }
    printf("\n");

//Inverted star pattern
    printf("Inverted star pattern\n\n");
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
 
 //Standing star pattern
    printf("standing star pattern\n\n");
    for(i=n;i>0;i--){
        for(j=i;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

//Diamond Pattern
    printf("Diamond Pattern\n\n");
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            printf(" ");
        }
        for(j=i+1;j<=n;j++){
            printf("* "); 
        }
        printf("\n");
    }
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            printf("* "); 
        }
        printf("\n");
        for(j=n-i;j>=0;j--){
            printf(" ");
        }
    }
    printf("\n");

//Full pyramid 180 degree rotated
    printf("Full pyramid 180 degree rotated\n\n");
    for(i=n;i>0;i--){
        for(j=i;j<=n;j++){
            printf("* "); 
        }
        printf("\n");
    }
    for(i=n;i>0;i--){
        for(j=i-1;j>0;j--){
            printf("* "); 
        }
        printf("\n");
    }
    printf("\n");

//Hourglass Pattern
    printf("\nHourglass Pattern\n\n");
    for(i=n;i>1;i--){
        for(j=i;j>0;j--){
            printf("* "); 
        }
        printf("\n");
        if(i==2){
            break;}
        else{
            for(j=n-i;j>=0;j--){
            printf(" ");
        }}
    }
    for(i=n;i>0;i--){
        for(j=i-1;j>0;j--){
            printf(" ");
        }
        for(j=i;j<=n;j++){
            printf("* "); 
        }
        printf("\n"); 
    }
    printf("\n");
    
//Hollow standing star pattern
    printf("\nHollow standing star pattern");
    for(i=0;i<n;i++){
        
    }





    return 0;
}