#include <bits/stdc++.h>
using namespace std;
int main()
{ 
        long long a,b,count=0;
        cin >> a >> b;
        while (true)
        {
            if(a>b)break;
            count++;
            a*=3;
            b*=2;
        }
        cout<<count<<endl;
}