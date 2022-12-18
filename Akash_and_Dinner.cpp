#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long query, required;
        cin >> query >> required;
        vector<long long>typ,tim;
        set<long long>tes;
        map<long long, long long>uni;
        for(long long i=0; i<query;i++)
        {
            long long x;
            cin >> x;
            typ.push_back(x);
            tes.insert(x);
        }
        for(long long i=0; i<query;i++)
        {
            long long x;
            cin >> x;
            tim.push_back(x);
        }
        if(required >tes.size())
        cout<<-1 << endl;
        else
        {

        }
    }
}