#include<bits/stdc++.h>
using namespace std;
long long getValue(char& a,char& b)
{
    char tempA=a,tempB=b;
    long long temp1=0;
    while((tempA!=tempB)&&(temp1<26))
    {
        temp1++;
        tempA++;
        if(tempA>'z')tempA='a';
    }
    return temp1;
}
long long getMinValue(char& a,char& b)
{
    char tempA=a,tempB=b;
    long long temp2=0;
    while ((tempA!=tempB)&&(temp2>-26))
    {
        tempA--;
        temp2--;
        if(tempA<'a')tempA='z';
    }
    return temp2;
}
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long length ,ans=0;
        cin >> length;
        string s1,s2;
        cin >> s1>>s2;
        // cout<<s1<<endl;
        // cout<<s2<<endl;
        for(long long i=0;i<length;i++)
        {
            ans=min(abs(ans+getValue(s1[i],s2[i])),abs(ans+getMinValue(s1[i],s2[i])));
        }
        cout<<abs(ans)<<endl;
        // for(long long i=0;i<length;i++)
        // {
        //     cout<<getValue(s1[i],s2[i])<<' ';
        // }
        // cout<<endl;
    }
}