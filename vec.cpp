#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <vector <int>>data;
    for (int i = 0; i <10;i++)
    {
        data[i]= new vector<int>da();
        for(int j=0;j<10;j++)data[i].push_back(j);
    }
    for (auto &it : data)
    {
        for (auto &it2 : it)
        {
            cout<<it2<<' ';
        }
        cout<<endl;
    }
    
}