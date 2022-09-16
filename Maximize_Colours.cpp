#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        long long a, b, c,sum=0;
        cin>>a>>b>>c;
        if(a){sum ++;a--;}
        if(b){sum ++;b--;}
        if(c){sum ++;c--;}
        if(a<c)swap(a,c);
        if(b<c)swap(b,c);
        if(a&&b){sum ++;b--;a--;}
        if(c&&a){sum ++;c--;a--;}
        if(b&&c){sum ++;b--;c--;}
    cout<<sum << endl;
    }
}