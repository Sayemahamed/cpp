#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    map<string, long long>marks;
    while (test--)
    {
        long long type;
        cin >> type;
        if (type == 1)
        {
            string s;
            cin >> s;
            // cout << s << endl;
            long long number;
            cin >> number;
            marks[s]+=number;
        }
        else if (type ==  2)
        {
            string s;
            cin >> s;
            marks.erase(s);
        }
        else if (type == 3)
        {
                        string s;
            cin >> s;
            cout<<marks[s]<<endl;
        }
    }
}