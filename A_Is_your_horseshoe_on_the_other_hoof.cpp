#include<bits/stdc++.h>
using namespace std;
int main() 
{
    set<int>data;
    for (int i = 0; i < 4; ++i)
    {
        int x;
        cin >> x;
        data.insert(x);
    }
    cout<<4-data.size()<<endl;
}