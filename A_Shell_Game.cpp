#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin >> n;
    n++;
    cin>>x;
    if(n%6==2)
    {
        if(x==0)x=1;
        else if(x==1)x=0;
        else x=2;
    }
    if(n%6==3){
        if(x==0)x=2;
        else if(x==1)x=0;
        else x=1;
    }
    if(n%6==4){
        if(x==0)x=2;
        else if(x==1)x=1;
        else if(x==2)x=0;
    }
    if(n%6==5){
        if(x==0)x=1;
        else if(x==1)x=2;
        else if(x==2)x=0;
    }
    if(n%6==0){
        if(x==0)x=0;
        else if(x==1)x=2;
        else if(x==2)x=1;
    }
    cout <<x;
}