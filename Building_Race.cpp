#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        float chef,chefina,chefSpeed,chefinaSpeed;
        cin >> chef >> chefina>> chefSpeed >> chefinaSpeed;
        if(chef/chefSpeed==chefina/chefinaSpeed)cout<<"Both"<<endl;
        else if(chef/chefSpeed<chefina/chefinaSpeed)cout<<"Chef"<<endl;
        else cout<<"Chefina"<<endl;
    }
}