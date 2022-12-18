#include <bits/stdc++.h>
using namespace std;
long long arr[1000007], cnt, preArr[1000007];
long long counter(long long i, long long j)
{

}
int main()
{
    long long size, ans = 0, j = 0;
    cin >> size >> cnt;
    set<long long>data;
    for (long long i = 0; i < size; i++)
    {
        cin >> arr[i];
        data.insert(arr[i]);
        preArr[i]=data.size();
    }
    for (long long i = 0; i < size; i++)
    {
        while (counter(i, j) <= cnt and j < size)
            j++;
        ans += j - i;
    }
    cout << ans << endl;
}