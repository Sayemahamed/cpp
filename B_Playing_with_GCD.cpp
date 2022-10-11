#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test ;
    cin >> test ;
    while (test--) 
    {
        long long element,flag = true ;
        cin >> element ;
        long long aArray[element],bArray[element+1] ;
        for (long long i=0; i<element; i++)cin >> aArray[i];
        bArray[0] = aArray[0];
        bArray[element] = aArray[element-1];
        for(long long i=1; i<element; i++)
        {
            bArray[i] = (aArray[i-1]*aArray[i])/__gcd(aArray[i-1],aArray[i]);
        }
        // for(long long i = 0; i <=element; ++i)cout<<bArray[i]<<" ";
        // cout<<endl;
        for(long long i = 0; i < element; ++i)
        {
            if(aArray[i] != __gcd(bArray[i],bArray[i+1]))flag = false;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}