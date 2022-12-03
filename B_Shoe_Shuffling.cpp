#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long students, flag = 0;
        cin >> students;
        map<long long, long long> student;
        vector<pair<long long, long long>> data;
        for (long long i = 1; i <= students; i++)
        {
            long long x;
            cin >> x;
            student[x]++;
            data.push_back({i, x});
        }
        for (auto &it : student)
            if (it.second == 1)
                flag = true;
        if (flag)
            cout << -1 << endl;
        else
        {
            for(long long i = 1; i <students; i++)
            {
                if(data[i].second==data[i-1].second)
                swap(data[i],data[i-1]);
                cout<<data[i-1].first<<' ';
            }
            cout<<data[students-1].first<<endl;
        }
    }
}