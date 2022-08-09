#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    long long a,b,x,sum=0;
    cin >> a >> b >> x ;
    if(a%x==0)a=a;
    else{
        for (long long i = a; i <=b; i++)
        {
        if(i%x==0)
            {
              a=i;
              break;
            }    
        }   
    }
    for(long long i = a; i <=b; i+=x)
    {
        sum+=i;
    }
    cout<<sum<<endl;
}