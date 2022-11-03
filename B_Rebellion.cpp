#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long elements,count=0;
        cin >> elements;
        long long element1[elements],element2[elements];
        for (long long i = 0; i < elements; i++)
        {
            cin>>element1[i];
            element2[i]=element1[i];
        } 
        sort(element1,element1+elements);
        for(long long i=elements-1; i >-1 ; i--)
        {
        if(element1[i]==0)break;
            if(element2[i]!=element1[i])count++;
        }            cout<<count<<endl;
    }
}