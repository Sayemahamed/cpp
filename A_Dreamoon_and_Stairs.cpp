#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long stairs,divider;
    cin>>stairs>>divider;
    if(divider>stairs)
    cout<<-1<<endl;
    else
    {
        for(long long i = ((stairs+1)>>1); i <=stairs; i++)
        {
            if(!(i%divider))
            {
                cout<<i<<endl;
                return false;
            }
        }
    }
}