#include<bits/stdc++.h>
using namespace std; 
bool cmp(pair<int,int> a, pair<int,int> b  )
{
return (a > b);
}   
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>>arr;
      for(int i=0; i<n; i++)  
        {
            int x,y;
            cin >> x>>y;
            arr.push_back({x,y});
        }
        sort(arr.begin(),arr.end(),cmp);
        for(auto it:arr)
        {
            cout<<it.first<< " "<<it.second<<endl;
        }
}