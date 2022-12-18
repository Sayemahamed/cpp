#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long elements, total, sum = 0, j = 0, ans = 0;
    cin >> elements >> total;
    vector<long long> element(elements);
    for (auto &i : element)
        cin >> i;
    for (long long i = 0; i < elements; i++)
    {
        while (j < elements and element[j] + sum <= total)
        {
            sum += element[j];
            j++;
        }
        total += element[i];
        ans = max(ans, j - i);
    }
    cout << ans << endl;
}