#include<bits/stdc++.h>
using namespace std;
const int mx=1000;
long long dimension,power,matrix[mx][mx],identityMatrix[mx][mx];
void matrixMultiply(long long A[][mx]  , long long B[][mx] )
{
    long long result[dimension+7][dimension+7];
    for (long long i=1; i<=dimension; i++)
    for (long long j=1; j<=dimension; j++)
    {
        result[i][j] = 0;
        for (long long k=0; k<=dimension; k++)
            result[i][j] +=(A[i][k]%1000000007)*(B[k][j]%1000000007);
    }
    for (long long k=1; k<=dimension; k++)
    for(long long j=0; j<=dimension ; j++)
    A[k][j] = result[k][j]%1000000007;
}
void printMatrix(long long A[][mx])
{
    for(long long i=1; i<=dimension ; i++)
    {
        for(long long j=1; j<=dimension ; j++)
        cout<<A[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        cin >> dimension >> power;
        for (long long i = 1 ; i <= dimension ; i++)
        for (long long j = 1 ; j <= dimension ; j++)
        cin >>matrix[i][j];
        for(long long i = 1 ; i <= dimension ; i++)
        for (long long j = 1 ; j <= dimension ; j++)
        {
            if(i==j)
            identityMatrix[i][j] =1;
            else
            identityMatrix[i][j] =0;
        }
        while(power)
        {
            if (power&1)
            {
                power--;
                matrixMultiply(identityMatrix,matrix);
            }
            else
            {
                power/=2;
                matrixMultiply(matrix,matrix);
            }
        }
        printMatrix(identityMatrix);
    }
}