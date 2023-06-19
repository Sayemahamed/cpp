#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
// data types//
string str1, str2;

//----------------------------------------------------------------//
// helper functions //
string dp(long long i, long long j,vector<vector<string>>&matrix)
{
    if (i < 0 || j < 0)
        return "";
    if(matrix[i][j]!="")return matrix[i][j];
    if (str1[i]==str2[j]){
        matrix[i][j] =str1[i] + dp(i-1, j-1,matrix);
        return matrix[i][j];
    }
    else{
        matrix[i][j] =dp(i-1,j,matrix);
        if(matrix[i][j].length()<dp(i,j-1,matrix).length()){
            matrix[i][j] =dp(i,j-1,matrix);
        }
        return matrix[i][j];
    }
}
//----------------------------------------------------------------//
// solve function//
void solve()
{
    cin >> str1 >> str2;
    vector<vector<string>> grid(str1.length()+1,vector<string>(str2.length()+1));
    string ans = dp(str1.length() - 1, str2.length() - 1,grid);
    for (int i = ans.length() - 1; i >= 0; i--)
        cout << ans[i];
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