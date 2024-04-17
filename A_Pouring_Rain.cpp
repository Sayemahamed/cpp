#include<bits/stdc++.h>
using namespace std;
int main()
{
    double diameter,initialHight,drinkingSpeed,rainingSpeed,pouring,time;
    cin >> diameter >> initialHight >> drinkingSpeed >>rainingSpeed;
    pouring = (0.5*diameter)*(0.5*diameter)*acos(-1)*rainingSpeed;
    time = ((0.5*diameter)*(0.5*diameter)*acos(-1)*initialHight)/(drinkingSpeed-pouring);
    if(drinkingSpeed >pouring)
    {
        cout << "YES"<<endl;
        cout<<setprecision(13)<<time<<endl;
    }
    else cout   <<  "NO"<<endl;
}