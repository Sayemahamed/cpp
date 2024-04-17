#include<bits/stdc++.h>
using namespace std;
int main()
{
    int gridSize, i, j, flag = 0;
    char grid[300][300];
    char x, y;
    cin >> gridSize;
    for(i = 0; i < gridSize; i++)
    {
        for(j = 0; j < gridSize; j++)
        {
            cin >> grid[i][j];
        }
    }
    x = grid[gridSize/2][gridSize/2];
    y = grid[0][1];
    for(i = 0; i < gridSize; i++)
    {
        if(grid[i][i] != x || grid[i][gridSize-(i+1)] != x || grid[i][i] == y || grid[i][gridSize-(i+1)] == y  )
        {
                flag = 1;
                break;
        }
        for(j = 0; j < gridSize; j++)
        {
            if(i != j && j != (gridSize - (i + 1)))
            {
                if(grid[i][j] != y)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }
    if(!flag)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}