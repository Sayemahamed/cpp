#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long setter,tester,editor;
        cin >> setter >> tester >> editor;
        if (setter>editor&&setter>tester)
        cout<<"Setter"<<endl;
        if(tester>editor&&tester>setter)
        cout<<"Tester"<<endl;
        if(editor>setter&&  editor>tester)
        cout<<"Editorialist"<<endl;
    }
}