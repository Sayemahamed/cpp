#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while (test--) 
    {
        long long num,temp,two;
        cin>>num;
        temp = num;
        two = temp;
        temp--;
        cout<<2<<endl;
        while (temp--)
        {
            two--;
            cout<<num<<" "<<two<<endl;
            num=((num+two+1)>>1);
        }
    }
}