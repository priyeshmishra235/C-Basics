#include<stdio.h>

int guassianElimination()
{
    //displaying the system of equation before getting input
    printf("----------System Of Linear Equations----------\n\n"
           "mat[0][0] * X1 + mat[0][1] * X2 + mat[0][2] * X3 = mat[0][3]\n"
           "mat[1][0] * X1 + mat[1][1] * X2 + mat[1][2] * X3 = mat[1][3]\n"
           "mat[2][0] * X1 + mat[2][1] * X2 + mat[2][2] * X3 = mat[2][3]\n\n"
           "**Enter only the values which do not produce infite solution\n"
           "or no solution. For such problems program will be updated soon!!\n");
    
    float mat[3][4]; //declaring matrix to store coefficients
    //getting input of coefficients
    for(int row=0;row<3;row++,printf("\n"))
        for(int col=0;col<4;col++){
            printf("mat[%d][%d] : ",row, col);
            scanf("%f",&mat[row][col]);
        }
    
    //calculating via guassian elimination
    for(int i=0;i<2;i++)
    {  for(int j=i+1;j<3;j++)
        {   float ratio = mat[j][i]/mat[i][i]; //to pivot 
            for(int k=0;k<4;k++)
                mat[j][k]=mat[j][k]-ratio*mat[i][k];
        }
    }

   float X3 = mat[2][3]/mat[2][2];
   float X2 = (mat[1][3]-mat[1][2]*X3)/mat[1][1];
   float X1 = (mat[0][3]-mat[0][1]*X2-mat[0][2]*X3)/mat[0][0];

   printf("\n\nSolution of system of linear Equations is: \nX1=%f\t\b\bX2=%f\t\b\bX3=%f",X1,X2,X3);
    return 0;
}

    