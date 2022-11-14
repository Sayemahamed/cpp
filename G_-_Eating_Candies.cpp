#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long numberOfCandies, preSum = 0, postSum = 0;
        cin >> numberOfCandies;
        queue<long long> pre;
        stack<long long> post;
        vector<long long> weight(numberOfCandies), ans;
        ans.push_back(0);
        for (long long i = 0; i < numberOfCandies; i++)
        {
            cin >> weight[i];
            pre.push(weight[i]);
            post.push(weight[i]);
        }
        while (pre.size() || post.size())
        {
            if (preSum == postSum)
            {
                if((2 * numberOfCandies - pre.size() - post.size())<=numberOfCandies)
                ans.push_back(2 * numberOfCandies - pre.size() - post.size());
                if (pre.size())
                {
                    preSum += pre.front();
                    pre.pop();
                }
                if (post.size())
                {
                    postSum += post.top();
                    post.pop();
                }
            }
            else if (preSum > postSum)
            {
                if (post.size())
                {
                    postSum += post.top();
                    post.pop();
                }
            }
            else if (preSum < postSum)
            {
                if (pre.size())
                {
                    preSum += pre.front();
                    pre.pop();
                }
            }
        }
        sort(ans.begin(), ans.end(),greater<long long>());
        cout<<ans[0]<<endl;
    }
}