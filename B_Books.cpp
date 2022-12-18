#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long books, tiMe, ans = 0, j = 0, sum = 0;
    cin >> books >> tiMe;
    long long book[books];
    for (auto &&it : book)
    {
        cin >> it;
    }
    for (long long i = 0; i < books; ++i)
    {
        while (j < books and sum + book[j] <= tiMe)
        {
            sum += book[j];
            j++;
        }
        sum-=book[i];
        ans= max(ans,j-i);
    }
    cout<<ans<<endl;
}