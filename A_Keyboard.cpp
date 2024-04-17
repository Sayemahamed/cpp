#include<bits/stdc++.h>
using namespace std;
int main()


{
    int m=0;
    char a;
    cin>>a;
    if(a=='L')m=1;
    else m=-1;
    string s,st1="qwertyuiop",st2="asdfghjkl;",st3="zxcvbnm,./"; 
    cin>>s;
    for(auto it:s)
    {
        if(st1.find(it)!= -1)cout<<st1[st1.find(it)+m];
        if(st3.find(it)!= -1)cout<<st3[st3.find(it)+m];
        if(st2.find(it)!= -1)cout<<st2[st2.find(it)+m];
    }
}