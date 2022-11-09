#include <bits/stdc++.h>
using namespace std;
bool comp(pair<long long, long long> &a, pair<long long, long long> &b)
{
    return a.first < b.first;
}
int main()
{
    long long treeCount, kingLocation;
    cin >> treeCount >> kingLocation;
    vector<pair<long long, long long>> tree;
    for (long long i = 0; i < treeCount; i++)
    {
        long long x, y;
        cin >> x >> y;
        tree.push_back(make_pair(x, y));
    }
    sort(tree.begin(), tree.end(), comp);
    // for (auto &it : tree)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    for (long long i = 0; i < kingLocation; i++)
    {
        long long x, y;
        cin >> x >> y;
        // cout << x << ' ' << y << endl;
        long long ans = 0,gcd;
        set<pair<long long,long long>> temp;
        bool leftFlag = true, rightFlag = true,flag= true,flag1=false;
        for (auto &it : tree)
        {
            gcd=__gcd(it.first-x,it.second-y);
            if(it.first>=x &&flag)
            {
                flag = false;
                ans += temp.size();
                temp.clear();
                flag1=false;
            }
            if (it.first == x)
            {
                if (it.second >= y && rightFlag)
                {
                    ans++;
                    rightFlag = false;
                }
                else if (leftFlag)
                {
                    ans++;
                    leftFlag = false;
                }
            }
            else
            temp.insert({((it.first-x)/gcd),((it.second-y)/gcd)}),flag1=true;
        }
        if(flag1)
        ans += temp.size();
        cout << ans ;
    }
}