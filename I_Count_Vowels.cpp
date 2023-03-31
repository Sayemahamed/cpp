#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//
long long ans;
//----------------------------------------------------------------//
// helper functions //

bool isVowel(char c){string vowel = "aeiouAEIOU";for(auto&it:vowel)if(it == c) return true; return false;}
void count(string s,long long idx){
    if(idx==s.length()) return;
    if(isVowel(s[idx])){count(s,idx+1);ans++;}
    else count(s,idx+1);
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    string s;getline(cin,s);
    count(s,0);
    cout<<ans;
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