#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	string dieRollAns[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
	cin>>x>>y;
	x=max(x,y);
	cout << dieRollAns[6-x]<<endl;
}