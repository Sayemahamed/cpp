#include<bits/stdc++.h>
using namespace std;
long long studentNumber,studentsMarks[200];
bool isPossible(long long low,long long number)
{
    long long count = 0;
    for(long long i = 0; i < studentNumber; i++)
    {
        if(studentsMarks[i] == low)count++;
    }
    return number>=studentNumber-count;
}
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long count=0,min=100;
        cin >>studentNumber ;
        for (int i = 0; i < studentNumber; i++)
        cin >>studentsMarks[i] ;
        for(long    i = 0; i < studentNumber; i++)
        {
            if(studentsMarks[0]==studentsMarks[i])count++;
            if(studentsMarks[i]<min)min = studentsMarks[i];
        }
        if(count==studentNumber)
        {cout<<studentNumber<<endl;continue;}
        long long low=0,high=1e9,mid;
        while(high-low<1)
        {
            mid=(high+low)/2;
            if(isPossible(min,mid))
            low=mid;
            else
            high=mid;
        }
        if(isPossible(min,high))
        cout<<high<<endl;
        else
        cout<<low<<endl;
    }
}