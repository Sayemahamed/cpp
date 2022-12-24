#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mul,mon,need;
    cin>>mul>>mon>>need;
    cout<<max(mul*need*(need+1)/2-mon,0);
}