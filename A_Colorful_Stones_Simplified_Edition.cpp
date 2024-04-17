#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string sa,sb;
    cin>>sa>>sb;
    int i=0;
    for(auto it:sb)
    {
        if(it==sa[i])i++;
    }
    cout<<i+1<<endl;
}