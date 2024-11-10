#include<stdio.h>

int main()
{
    //displaying the system of equation before getting input
    printf("----------System Of Linear Equations----------\n\n"
           "mat[0][0] * X1 + mat[0][1] * X2 + mat[0][2] * X3 = mat[0][3]\n"
           "mat[1][0] * X1 + mat[1][1] * X2 + mat[1][2] * X3 = mat[1][3]\n"
           "mat[2][0] * X1 + mat[2][1] * X2 + mat[2][2] * X3 = mat[2][3]\n\n"
           "**Enter only the values which do not produce infite solution\n"
           "or no solution. For such problems program will be updated soon!!\n");
    
    float mat[12][12]; //declaring matrix to store coefficients
    printf("\nEnter values for the coefficients of systems of linear equations:\n");
    //getting input of coefficients
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            printf("Enter the value to fill at the place of mat[%d][%d] : ",row, col);
            scanf("%f",&mat[row][col]);
        }
        printf("\n");
    }
    //displaying filled system of linear equations
    printf("-----System of linear equation filled-----\n");
    printf("%f*X1 + %f*X2 + %f*X3 = %f\n",mat[0][0],mat[0][1],mat[0][2],mat[0][3]);
    printf("%f*X1 + %f*X2 + %f*X3 = %f\n",mat[1][0],mat[1][1],mat[1][2],mat[1][3]);
    printf("%f*X1 + %f*X2 + %f*X3 = %f\n",mat[2][0],mat[2][1],mat[2][2],mat[2][3]);

    //calculating via guassian elimination
    for(int i=0;i<2;i++)
    {  for(int j=i+1;j<3;j++)
        {   float ratio = mat[j][i]/mat[i][i]; //to pivot 
            for(int k=0;k<4;k++)
            {
                mat[j][k]=mat[j][k]-ratio*mat[i][k];
            } 
        }
    }
    
    printf("\n\n%f*X1 + %f*X2 + %f*X3 = %f\n",mat[0][0],mat[0][1],mat[0][2],mat[0][3]);
    printf("%f*X1 + %f*X2 + %f*X3 = %f\n",mat[1][0],mat[1][1],mat[1][2],mat[1][3]);
    printf("%f*X1 + %f*X2 + %f*X3 = %f\n",mat[2][0],mat[2][1],mat[2][2],mat[2][3]);
    

   float X3 = mat[2][3]/mat[2][2];
   float X2 = (mat[1][3]-mat[1][2]*X3)/mat[1][1];
   float X1 = (mat[0][3]-mat[0][1]*X2-mat[0][2]*X3)/mat[0][0];

   printf("\n\nSolution of system of linear Equations is: \nX1=%f\t\b\bX2=%f\t\b\bX3=%f",X1,X2,X3);



    return 0;
}

    