#include <bits/stdc++.h>
using namespace std;
long long n, n1, n2, n3, n4, tmp;
void gt()
{
    n1 = tmp % 10;
    tmp /= 10;
    n2 = tmp % 10;
    tmp /= 10;
    n3 = tmp % 10;
    tmp /= 10;
    n4 = tmp % 10;
}
int main()
{
    cin >> n;
    tmp = ++n;
    gt();
    while (n1 == n2 or n1 == n3 or n1 == n4 or n2 == n3 or n2 == n4 or n3 == n4)
    {
        ++n;
        tmp = n;
        gt();
    }
    cout << n << endl;
}