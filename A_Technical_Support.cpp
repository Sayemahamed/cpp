#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test; 
    while   (test--)
    {
        long long size ,qCount=0;
        cin >> size;
        char s;
        while (size --)
        {
            cin >> s;
            if (s == 'Q') qCount++;
            else if(qCount)qCount--;
        }
        if(qCount)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}