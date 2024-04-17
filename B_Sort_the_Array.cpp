#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long elements, L = 1, R = 1, flag = true;
    cin >> elements;
    long long ele[elements + 1];
    ele[0] = 0;
    for (long long i = 1; i <= elements; i++)
        cin >> ele[i];
    for (long long i = 1; i <= elements; i++)
    {
        if (ele[i] >ele[i+1] )
        {
            L = i;
            break;
        }
    }
    for (long long i = elements; i > 0; i--)
    {
        if (ele[i] < ele[i-1])
        {
            R = i;
            break;
        }
    }
    reverse(ele+L,ele+R+1);
    flag=is_sorted(ele,ele+elements+1);
    if(flag)
    {
        cout<<"yes"<<endl<<L<<' '<<R<<endl;
    }
    else cout<<"no"<<endl;
}