#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//
struct Node{
    int cup,tea,index;
    Node(){};
};
//----------------------------------------------------------------//
// helper functions //
bool compSize(Node&a,Node&b){return a.cup>b.cup;}
bool compIndex(Node&a,Node&b){return a.index<b.index;}
//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long cups,tea;cin>>cups>>tea;
    vector<Node>friends(cups);
    for(long long i=0;i<cups;i++){
        cin>>friends[i].cup;
        friends[i].tea=(friends[i].cup+1)/2;
        friends[i].index=i;
        tea-=friends[i].tea;
    }
    if(tea<0){
        cout<<-1<<endl;
    }
    else{
        sort(friends.begin(), friends.end(),compSize);
        for(long long i=0; i<friends.size(); i++){
            long long tmp=min(tea,(long long)friends[i].cup-friends[i].tea);
            friends[i].tea+=tmp;
            tea-=tmp;
        }
        sort(friends.begin(),friends.end(),compIndex);
        for(auto&it:friends)cout<<it.tea<<" ";
        cout<<endl;
    }
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
}