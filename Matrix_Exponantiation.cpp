#include<bits/stdc++.h>
using namespace std;
const int N=1000;
long long matrix[N][N],identity_matrix[N][N];


void matrix_multiply(long long A[][N], long long B[][N], long long dimension)
{
    long long Result[dimension+7][dimension+7];
    for (int i=0; i<dimension; i++)
    for (int j=0; j<dimension; j++)
    {
        Result[i][j]=0;
        for (int k=0; k<dimension; k++)
        Result[i][j]+=(A[i][k]%1000000007)*(B[k][j]%1000000007);
    }
    for (int i=0; i<dimension; i++)
    for (int j=0; j<dimension; j++)
    A[i][j]=(Result[i][j]%1000000007);
}


void Print_Matrix(long long A[][N],long long dimension)
{
    for (int i=0; i<dimension; i++)
    {
        for (int j=0; j<dimension; j++)
        cout<<A[i][j]<<" ";
        cout<<endl;
    }
}



int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long dimension,power;
        cin>>dimension>>power;
        for(long long i=0;i<dimension;i++)
        for(long long j=0;j<dimension;j++)
        {
            if(i==j)identity_matrix[i][j]=1;
            else
            identity_matrix[i][j]=0;
        }


        for(long long i=0;i<dimension;i++)
        for(long long j=0;j<dimension;j++)
        cin>>matrix[i][j];

        while(power)
        {
            if(power%2)
            {
                matrix_multiply(identity_matrix,matrix,dimension);
                power--;
            }
            else
            {
                power/=2;
                matrix_multiply(matrix,matrix,dimension);
            }
        }

        Print_Matrix(identity_matrix,dimension);
    }
}