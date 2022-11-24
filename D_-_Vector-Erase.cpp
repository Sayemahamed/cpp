#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long numbers;
    cin >> numbers;
    vector<long long> number(numbers);
    for (long long i = 0; i < numbers; i++)
        cin >> number[i];
    long long index,rangeA,rangeB;
    cin >> index>>rangeA>>rangeB;
    number.erase(number.begin()+index-1);
    number.erase(number.begin()+rangeA-1,number.begin()+rangeB-1);
    cout<<number.size()<<endl;
    for(long long i=0;i<number.size();i++)cout<<number[i]<<' ';
}