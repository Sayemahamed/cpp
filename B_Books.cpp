#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long books,tim,ans=0,sum=0,j=0;
    cin>>books>>tim;
    vector<long long>data(books);
    for (auto &&it : data)
    {
        cin >>it;   
    }
    for (long i = 0; i < books; i++)
    {
        while (j<books and data[i]+sum<tim)
        {
            sum += data[j];
            j++;
        }
        sum-=data[i];
        ans=max(ans,j-i);
    }
    cout<<ans<<endl;
}