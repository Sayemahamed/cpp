#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
string s,s1="Timur";
sort(s1.begin(),s1.end());
cin>>s;
sort(s.begin(),s.end());
if((s==s1))
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}