#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long n,m,f=1;
    cin >> n >> m;
    char a;
    for (long long i = 0; i < n; i++)
    for (long long j = 0; j < m; j++)
        {
            cin>>a;
            if (a == 'C'||a == 'M'||a == 'Y')f=0;
        }
        if(!f)
        cout<<"#Color"<<endl;
        else cout<<"#Black&White"<<endl;
}