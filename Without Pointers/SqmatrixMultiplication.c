#include<stdio.h>
#include<stdlib.h>

int SqmatrixMultiplication()
{
    //declaring variables
    int a[10][10],b[10][10],mul[10][10],i,j,k,order;


    //system("cls");
    //getting input from the user for the number of rows and columns
    printf("Order of the matix: ");
    scanf("%d",&order);

    //getting input from the user for the elements of matrix A
    printf("Enter the elements of Matrix A \n");
    for(i=0;i<order;i++){
        for(j=0;j<order;j++){
            printf("Element A[%d][%d] is: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    //getting input from the user for the elements of matrix B
    printf("Enter the elements of Matrix B \n");
    for(i=0;i<order;i++){
        for(j=0;j<order;j++){
            printf("Element B[%d][%d] is: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    //multiplying the matrix
    for(i=0;i<order;i++){
        for(j=0;j<order;j++){
            mul[i][j]=0;
            for(k=0;k<order;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }  
        }
    }

    //displaying the output
    printf("The output of matrix multiplication A X B is :\n");
        for(i=0;i<order;i++){
            /*//for printing matrix A
            for(j=0;j<order;j++){
                printf("%d ",a[i][j]);
            }
            printf("\t\b\b");
            //for printing matrix B
            for(j=0;j<order;j++){
                printf("%d ",b[i][j]);
            }
            printf("\t\b\b");*/
            //for printing matrix Multiplication output
            for(j=0;j<order;j++){
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }
    return 0;
}