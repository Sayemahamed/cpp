#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long numberOfTasks ;
        cin >> numberOfTasks;
        long long startTime[numberOfTasks],endTime[numberOfTasks];
        for(long long i=0; i<numberOfTasks; i++)cin >>startTime[i];
        for(long long i=0; i<numberOfTasks; i++)cin >>endTime[i];
        for(long long i=0; i<numberOfTasks; i++)
        {
            cout<<endTime[i]-startTime[i]<<' ';
            if(i!=numberOfTasks-1)
            if(endTime[i]>startTime[i+1])
            startTime[i+1]=endTime[i];
        }
        cout<<endl;
    }
}