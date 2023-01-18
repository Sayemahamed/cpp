#include <bits/stdc++.h>
using namespace std;
string toStringZeroRemoved(long long value)
{
    string str = "";
    while (value)
    {
        if (value % 10)
        {
            str = (char)(value % 10 + '0') + str;
        }
        value /= 10;
    }
    return str;
}
long long toInt(string str)
{
    long long value = 0, mul = 1, i = str.length() - 1;
    while (i >= 0)
    {
        value += (str[i] - '0') * mul;
        mul *= 10;
        i--;
    }
    return value;
}
int main()
{
    long long a, b;
    cin >> a >> b;
    if (toInt(toStringZeroRemoved(a)) + toInt(toStringZeroRemoved(b)) == toInt(toStringZeroRemoved(a + b)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}