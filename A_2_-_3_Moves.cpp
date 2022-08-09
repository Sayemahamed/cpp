#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,r,res=0;
    cin>>t;
    while(t--)
    {
        long long  n;
        cin>>n;
         if(n<0){
            n=n*(-1);
        }
        r=n%3;
        if(n==1){
        res=2;
        }
        else if(n%3==0){
            res=n/3;
        }
        else if(n%2==0 && n>0 && n<=10)
        res=n/2;
       else  if(r==1)
        {
            res=n/3+2;

        }
        else if(r==2){
            res=n/3+1;
        }
    cout<<res<<endl;
     
        }
}