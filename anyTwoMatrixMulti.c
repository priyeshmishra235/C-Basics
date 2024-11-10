#include<stdio.h>

int main()
{
    //declaring variables
    int a[10][10],b[10][10],mul[10][10],i,j,k,rowA,colA,rowB,colB;


    //system("cls");
    //getting input from the user for the number of rows and columns
    printf("Enter the number of rows in matrix A: ");
    scanf("%d",&rowA);
    printf("Enter the number of columns in matrix A: ");
    scanf("%d",&colA);
    printf("Enter the number of rows in matrix B: ");
    scanf("%d",&rowB);
    printf("Enter the number of columns in matrix B: ");
    scanf("%d",&colB);

    /*if((rowA,rowB,colA,colB>=48 && rowA,rowB,colA,colB<=57)){ 
            printf("Some of the Entered value/s are not number/s \n");
        }*/
    
    //checking if column of a and row of b are same
    if(colA!=rowB){
        printf("Column of matrix A must be equal to Row of matrix B\n");
        return 1;
    }


    //getting input from the user for the elements of matrix A
    printf("Enter the elements of Matrix A \n");
    for(i=0;i<rowA;i++){
        for(j=0;j<colA;j++){
            printf("Element A[%d][%d] is: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    //getting input from the user for the elements of matrix B
    printf("Enter the elements of Matrix B \n");
    for(i=0;i<rowB;i++){
        for(j=0;j<colB;j++){
            printf("Element B[%d][%d] is: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    //matrix multiplication
    for(i=0;i<rowA;i++){
        for(j=0;j<colB;j++){
            mul[i][j]=0;
            for(k=0;k<colA;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }  
        }
    }
    printf("The output of matrix multiplication A X B is :\n");
        for(i=0;i<rowA;i++){
            for(j=0;j<colB;j++){
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }
    








    return 0;
}