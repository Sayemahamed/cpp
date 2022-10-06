#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while (t--)
    {
        bool found = false;
        string s;
        cin >> s;
        // cout<<s<<endl;
        long long count = 0;
        for (auto it:s)
        {
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u')
            count++;
            else 
            {
                if (count >2)
                {
                    found = true;
                    break;
                }
                count=0;
            }
        }
                        if (count >2)
                {
                    found = true;
                    // break;
                }
        if (found)
        cout <<"Happy"<<endl;
        else
        cout <<"Sad"<<endl;
    }
}