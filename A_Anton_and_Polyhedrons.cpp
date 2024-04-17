#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,count=0;
    string s;
    cin>>t;
    while (t--) 
    {
        cin>>s;
        // cout<<s<<endl;
        if(s=="Icosahedron")count+=20;
        if(s=="Cube")count+=6;
        if(s=="Tetrahedron")count+=4;
        if(s=="Dodecahedron")count+=12;
        if(s=="Octahedron")count+=8;
    }
    cout<<count<<endl;
}