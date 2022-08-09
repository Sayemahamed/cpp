#include <bits/stdc++.h>
using namespace std;
vector<char> st;
    void grnarate(int x,int y)
{
    if(x ==0&&y ==0)
    {
        for(auto it:st)
        {
            cout<<it;
        }
        cout<<endl;
        return;
    }
    if(x!=0)
    {
        st.push_back('(');
        grnarate(x-1,y);
        st.pop_back();
    }
    if(y!=0 &&y>x)
     {
        st.push_back(')');
        grnarate(x,y-1);
        st.pop_back();
     }  
}
int main()
{
    int x;
    cin >> x;
    grnarate(x,x);
}