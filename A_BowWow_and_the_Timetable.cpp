#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,onesCount=0;
    string s;
    cin>>s;
    n = s.length();
    for(int i=0; i<n; i++){
        onesCount += s[i] - '0';
    }
    if(onesCount == 0){
        cout<<0<<endl;
    }
    else if(onesCount == 1){
        cout<<n/2<<endl;
    }
    else{
        cout<<(n+1)/2<<endl;
    }
}