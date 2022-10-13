#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while (test--) 
    {
        long long firstXCount=0, secondXCount=0;
        string s1,s2;
        cin>>s1 >> s2;
        for(auto &it:s1)if(it=='X')firstXCount++;
        for(auto &it:s2)if(it=='X')secondXCount++;
        // cout<<"firstXCount:"<<firstXCount<<" secondXCount:"<<secondXCount<<endl;
        // cout << s1 << endl;
        // cout << s2 << endl;
        if(s1[firstXCount]==s2[secondXCount]&&s1[firstXCount]!='S')
        {
            if(firstXCount>secondXCount)
            cout<<">"<<endl;
            else if(firstXCount<secondXCount)
            cout<<"<"<<endl;
            else    cout<<"="<<endl;
        }
        else if(s1[firstXCount]==s2[secondXCount]&&s1[firstXCount]=='S')
        {
            if(firstXCount>secondXCount)
            cout<<"<"<<endl;
            else if(firstXCount<secondXCount)
            cout<<">"<<endl;
            else    cout<<"="<<endl;
        }
        else if(s1[firstXCount]>s2[secondXCount])
        {
            cout<<"<"<<endl;
        }
        else cout<<">"<<endl;
    }
}