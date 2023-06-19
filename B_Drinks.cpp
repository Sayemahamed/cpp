#include<bits/stdc++.h>
// #include<cuchar>
using namespace std;
int main()
{
    long long juice;
    cin >>juice;
    double value=0;
    vector<double> dat(juice);
    for(auto&it: dat)cin>>it,value+=it;
    cout<<fixed<<setprecision(12)<<value/juice<<endl;
}