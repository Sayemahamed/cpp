#include <bits/stdc++.h>
using namespace std;
map<bool,double>data;
double L,W;
int main()
{
    while(1)
    {
    cin >> L >> W;
    if(L==0 and W==0)   break;
    check(L,W);
    }
}