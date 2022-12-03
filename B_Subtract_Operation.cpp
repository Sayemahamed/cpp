#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long elements, value,flag=false;
        cin >> elements >> value;
        long long element[elements];
        map<long long, bool> data;
        for (auto &it : element)
        {
            cin >> it;
            data[it - value] = true;
            data[it + value] = true;
        }
        for (auto &it : element)
        {
            if(data[it])flag =true;
        }
        
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}