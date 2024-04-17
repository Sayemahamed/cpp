#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,is_rated=0,sure=1;
    cin >> t;
    long long arr[t];
    vector<long long>arr1;
    for (long long i=0; i<t; i++)
    {
        long long x;
        cin >>arr[i]>> x ;
        arr1.push_back(arr[i]);
        if(x!=arr[i])is_rated=true;
    }
    sort(arr1.rbegin(),arr1.rend());
    for(long i=0;i<t;i++)
    {
        if(arr1[i]!=arr[i])sure=false;
    }
    if(is_rated)
    cout << "rated" << endl;
    else
    {
        if(sure)
        cout << "maybe" << endl;
        else
        cout << "unrated" << endl;
    }
}