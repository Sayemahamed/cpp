#include<bits/stdc++.h>
using namespace std;
const int Mx=1000;
long long Identity_Matrix[Mx][Mx],Matrix[Mx][Mx]; 


void Matrix_multiply( long long A[][Mx]  , long long B[][Mx] , long long dimension)
{
    long long Result[dimension+7][dimension+7];
    for (long long i=0; i<dimension; i++)
    for (long long j=0; j<dimension; j++)
    {
        Result[i][j]=0;
        for (long long k=0; k<dimension; k++)
        Result[i][j]+=(A[i][k]%1000000007)*(B[k][j]%1000000007);
    }
    for (long long i=0; i<dimension; i++)
    for (long long j=0; j<dimension; j++)
    A[i][j]=(Result[i][j]%1000000007);
}

void printResult(long long A[][Mx], long long dimension)
{
    for (long long i=0; i<dimension; i++)
    {
    for (long long j=0; j<dimension; j++)
    cout<<A[i][j]<<" ";
    cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while (t--) 
    {
        long long dimension,power;
        cin >> dimension >> power;
        for (long long i = 0; i < dimension; i++)
        for (long long j = 0; j <dimension; j++) 
        {
            if(i ==j)
            Identity_Matrix[i][j] =1;
            else
            Identity_Matrix[i][j] =0;
        }
        for (long long i = 0; i < dimension; i++)
        for (long long j = 0; j <dimension; j++) 
        cin >>Matrix[i][j];

        while(power)
        {
            if(power&1)
            {
                power--;
                Matrix_multiply(Identity_Matrix, Matrix,dimension);
            }
            else
            {
                power/=2;
                Matrix_multiply(Matrix, Matrix,dimension);
            }
        }

        
        printResult(Identity_Matrix,dimension);
    }
}