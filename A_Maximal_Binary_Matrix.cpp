#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//
long long dimension,need;
bool grid[107][107];
//----------------------------------------------------------------//
// helper functions //
void fillUp(int i, int j ,int count){
    if(count<=0)return;
}

//----------------------------------------------------------------//
// solve function//
void solve()
{
    cin>>dimension>>need;
    if(dimension*dimension<need)cout<<-1<<endl;
    else{
        for(long long i=0;i<dimension;i++){
            for(long long j=i;j<dimension;j++){
                if(need>(i!=j)){
                    grid[i][j]=grid[j][i]=true;
                    need-=(i!=j)+1;
                }
            }
        }
        for(long long i=0;i<dimension;i++){
            for(long long j=0;j<dimension;j++)cout<<grid[i][j]<<' ';
            cout<<endl;
        }
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