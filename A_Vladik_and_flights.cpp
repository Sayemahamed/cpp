#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long siz, start, end;
    cin >> siz >> start >> end;
    string str;
    cin >> str;
    if (str[start - 1] == str[end - 1])
        cout << 0 << endl;
    else
        cout << 1 << endl;
}