#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a1,a2,a3;
    long long t,count[3]={0,0,0};
    cin >> t;
    long long arr[t];
    for (int i = 0; i < t; i++)
    {
    cin >> arr[i];
    if(arr[i]==1)a1.push_back(i+1);
    else if(arr[i]==2)a2.push_back(i+1);
    else if(arr[i]==3)a3.push_back(i+1);
    count[arr[i]-1]++; 
    }
    long long min=*min_element(count,count+3);
    cout<<min<<endl;
    for(int i = 0; i < min; i++)
    {
        cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
    }
}