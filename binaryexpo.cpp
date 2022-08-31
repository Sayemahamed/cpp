#include<bits/stdc++.h>
using namespace std;
long long mat[50][50];
long long temp_mat[50][50];
long long identity_matrix[50][50];
void initialize_identity_matrix() 
{
    for (int i = 0; i < 50; i++)
    for(int j = 0; j < 50; j++)
    {
        if(i==j)
        identity_matrix[i][j] = 1;
        else
        identity_matrix[i][j] = 0;
    }
}
void mul(long long dim)
{
    for (int i = 0; i < dim; i++)
    for (int j = 0; j < dim; j++)
    for (int k = 0; k < dim; k++)
    {
        temp_mat[i][j] += mat[i][k]*mat2[k][j];
    }
}
int main()
{
    initialize_identity_matrix(); 
    long long pow,dim;
    cin>>dim>>pow;
    for(int i=0;i<dim+1;i++)for(int j=0;j<dim;j++)cin>>mat[i][j];
    while(pow)
    {
        if(pow%2)
        {
            pow--;
        }
        else
        {
            pow/=2;
        }
    }
}
