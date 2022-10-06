#include<bits/stdc++.h>
using namespace std;
int main()
{
    float f,right,left,mid;
    cin >> f;
    left =0;
    right =abs(f);
    // cout<<left;
    while (right-left>0.0001)
    {
        mid=(right+left)/2;
        if (mid*mid==f)break;
        if (mid*mid<f)left=mid;
        if (mid*mid>f)right=mid;
    }
    cout<<mid<<endl;
    cout<<left<<endl;
    cout<<right<<endl;
}