#include<bits/stdc++.h>
using namespace std;
const long long N=1000;

long long Matrix[N][N],Identity_Matrix[N][N];

void Matrix_multiply(long long A[][N]  , long long B[][N], long long dimension)
{
    long long result[dimension+7][dimension+7];
    for(int i=0;i<dimension;i++)
    for(int j=0;j<dimension;j++)
    {
        result[i][j]=0;
        for(int k=0;k<dimension;k++)
        result[i][j]+=(A[i][k]%1000000007)*(B[k][j]%1000000007);
    }
    for(int i=0;i<dimension;i++)
    for(int j=0;j<dimension;j++)
    A[i][j]=result[i][j]%1000000007;
}


void Print_Matrix(long long A[][N], long long dimension)
{
    for(int i=0;i<dimension;i++)
    {
        for(int j=0;j<dimension;j++)
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

        for(long long i=0; i<dimension; i++)
        for(long long j=0; j<dimension; j++)
        cin>>Matrix[i][j];


        for(long long i=0;i<=dimension; i++)
        for(long long j=0;j<=dimension; j++)
        {
            if(i==j)
            Identity_Matrix[i][j]=1;
            else
            Identity_Matrix[i][j]=0;
        }


        while(power)
        {
            if(power%2)
            {
                power--;
                Matrix_multiply(Identity_Matrix,Matrix,dimension);
            }
            else
            {
                power/=2;
                Matrix_multiply(Matrix,Matrix,dimension);
            }
        }


        Print_Matrix(Identity_Matrix,dimension);
    }
}