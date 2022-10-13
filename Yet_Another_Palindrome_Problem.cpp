#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long numbers,flag = false,mx=-1;
        cin >> numbers;
        long long number[numbers];
        for (long long i = 0; i < numbers; i++)cin >> number[i];
        // sort(number,number+numbers);
        for (long long i = 0; i < numbers/2; i++)
        {
            // if(number[i] < number[i+1])flag=false;
            if(number[numbers-1-i] - number[i]>mx)mx=abs(number[i] - number[numbers-1-i]);
        }
        if (flag){cout <<-1<<endl;continue;}
        cout<<mx<<endl;
    }
}