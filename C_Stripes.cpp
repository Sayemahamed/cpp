#include<bits/stdc++.h>
using namespace std;
char dat[8][8];
char tests ()
{
    for (int i = 0; i < 8; i++)
        {
            bool flag = true;
            for(int j = 0; j < 8; j++)
            {
                if(dat[i][j] =='B'||dat[i][j] =='.')
                flag = false;
            }
            if(flag)
            {
                return 'R';
            }
        }
    return 'B';
}
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        for (int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
        cin >> dat[i][j];
        cout<<tests()<<endl;
    }
}