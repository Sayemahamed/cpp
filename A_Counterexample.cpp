#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long a,b;
    cin >> a >> b;
    if(a&1)
    a++;
    if(abs(a-b) <2)
    {
        cout <<-1<<endl;
        return 0;
    }
    cout<<a<<" "<<a+1<<" "<<a+2<<endl;
}