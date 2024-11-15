#include<stdio.h>


// NOT WORKING // NOT WORKING // NOT WORKING !!
int order;
void getCofactor(int mat[order][order],int cofac[order][order],int p, int q, int n)
{
    int i=0,j=0;

    //looping for each element of the matrix
    //here p is the row about which we are finding the determinant about
    //and q is the current column of the elements of the first row element
    //about which we are calculating the cofactor
    for (int row = 0; row<n; row++){
        for (int col = 0; col< n; col++){
            //copying into temporary matrix only those elements which 
            //are not in given row and column
            if(row!=p && col!=q)
            {
                cofac[i][j++] = mat[row][col]; //check here if i replace j++ with j and do j++ before if statement
                //Row is filled, so increasin the row index
                // and reseting col index
                if(j=order-1){
                    j=0;
                    i++;
                }
            }
        }
    }
}

int determinantOfMatrix(int mat[order][order],int order)
{
    //initializing result 
    int det = 0;

    //base case if matrix contains single element
    if(order == 1)
        return mat[0][0];
    
    //declaring a 2Darray to store cofactors
    int cofac[order][order];

    //to store sign multiplier
    int sign = 1;

    //iterate for each elemnt of first row
    for (int firstCol =0; firstCol < order;firstCol++)
    {
        //getting cofactor of mat[0][firstCol]
        getCofactor(mat,cofac,0,firstCol,order);
        //now getting determinant of a new matrix which is cofactor matrix
        //so will will calculate it via recursion until we reach single element cofactor
        //or 2X2 cofactor 
        det = det + sign * mat[0][firstCol] * determinantOfMatrix(cofac,order-1);
        //now changing the sign 
        sign = -sign;
    }
    return det;
}


//function to display the output matrix
void display(int mat[order][order],int row ,int col)
{
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++){
            printf(" %d",mat[i][j]);
        }
        printf("n");
    }
}

int determinant()
{
    int mat[10][10],det2[2][2],order;

    //getting input from the user for the number of rows and columns
    printf("Order of the matix: ");
    scanf("%d",&order);
    //getting input from the user for the elements of matrix
    printf("Enter the elements of Matrix A \n");
    for(int i=0;i<order;i++){
        for(int j=0;j<order;j++){
            printf("Element A[%d][%d] is: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    //displaying the input for debugging
    for(int i=0;i<order;i++){
        for(int j=0;j<order;j++){
            printf("%d ",mat[i][j]);
        }
         printf("\n");
    }
    //finding the determinant
    printf("Determinant of the matrix is: %d",determinantOfMatrix(mat,order));

    return 0;
}