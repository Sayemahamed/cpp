#include<bits/stdc++.h>
using namespace std;
const long long Mx=2;
long long Mat[Mx][Mx],I[Mx][Mx];
void Matrix_multiply( long long A[Mx][Mx], long long B[Mx][Mx])
{
    long long result[2][2];
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    {
        result[i][j]=0;
        for(int k=0;k<2;k++)
        result[i][j]+=(A[i][k]%1000000007)*(B[k][j]%1000000007);
    }
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    A[i][j]=(result[i][j]%1000000007);
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        Mat[0][0]=0;
        Mat[0][1]=1;
        Mat[1][0]=1;
        Mat[1][1]=1;
        I[0][0]=1;
        I[0][1]=0;
        I[1][0]=0;
        I[1][1]=1;
        long long a,b,power;
        cin>>a>>b>>power;
        a=a%1000000007;
        b=b%1000000007;
        while(power)
        {
            if(power%2)
            {
                power--;
                Matrix_multiply(I,Mat);
            }
            else
            {
                power/=2;
                Matrix_multiply(Mat,Mat);
            }
        }
        cout<<(I[1][0]*b+I[0][0]*a)%1000000007<<endl;
    }
}