#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >>  test;
    while   (test--)
    {
        long long points;
        cin >> points;
        vector<long long>point(points);
        for (auto &&it : point)
        {
            cin>>it;
        }
        long long i=1,j=points-1;
        while(i<points-1 and point[i-1]>=point[i])i++;
        while(j>0 and point[j]>=point[j-1])j--;
        if(i>=j)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}