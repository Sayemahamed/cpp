#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        long long n, ans1 = 0, ans2 = 0,i=0,x;
        cin >> n;
        while(n>0)
        {
            x=4*i++ + 1;
            ans1+=min(max((long long)0,n),x);
            n-=x;
            x=4*i++ + 1;
            ans2+=min(max((long long)0,n),x);
            n-=x;
        }
        cout<<ans1<<' '<<ans2<<endl;
    }
}