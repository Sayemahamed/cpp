#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
#define   SIZE   10
 
 
int main()
{
     float a[SIZE][SIZE], x[SIZE], ratio, det=1;
     int i,j,k,n;
 
     /* Inputs */
     /* 1. Reading number of unknowns */
     printf("Enter Order of Matrix: ");
     scanf("%d", &n);
 
     /* 2. Reading Matrix */
     printf("\nEnter Coefficients of Matrix: \n");
     for(i=0;i< n;i++)
     {
          for(j=0;j< n;j++)
          {
               printf("a[%d][%d]=",i,j);
               scanf("%f", &a[i][j]);
          }
     }
 
    /* Here we are using Gauss Elimination
    Technique for transforming matrix to
    upper triangular matrix */
    /* Applying Gauss Elimination */
     for(i=0;i< n;i++)
     {
          if(a[i][i] == 0.0)
          {
               printf("Mathematical Error!");
               exit(0);
          }
          for(j=i+1;j< n;j++)
          {
               ratio = a[j][i]/a[i][i];
 
               for(k=0;k< n;k++)
               {
                    a[j][k] = a[j][k] - ratio*a[i][k];
               }
          }
     }
 
     /* Displaying upper triangular matrix */
      
     /* Not required, just for the sake of understanding */
      
     /* By analyzing upper triangular matrix you 
     will get what's going on :) */
     printf("\nUpper Triangular Matrix: \n");
     for(i=0;i< n;i++)
     {
          for(j=0;j< n;j++)
          {
               printf("%0.2f\t",a[i][j]);
          }
          printf("\n");
     }
 
     /* Finding determinant by multiplying
     elements in principal diagonal elements */
     for(i=0;i< n;i++)
     {
         det = det * a[i][i];
     }
 
     printf("\n\nDeterminant of given matrix is: %0.3f", det);
 
 
     return 0;
}