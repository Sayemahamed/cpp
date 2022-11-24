#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long numbers;
    cin >> numbers;
    vector<long long> number(numbers);
    for (long long i = 0; i < numbers; i++)
        cin >> number[i];
    sort(number.begin(), number.end());
    for (long long i = 0; i < number.size(); i++)
        cout << number[i] << " ";
}