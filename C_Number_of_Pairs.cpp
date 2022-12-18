#include <bits/stdc++.h>
using namespace std;
template <typename T>
T findFact(T num)
{
    int i = 1, fact = 1;
    while (i <= num)
    {
        fact = i * fact;
        i++;
    }
    return fact;
}
template <typename T>
T findNPR(T n, T r)
{
    long long numerator, denominator;
    numerator = findFact(n);
    denominator = findFact(n - r);
    return (numerator / denominator);
}
template <typename T>
T findNCR(T n, T r)
{
    int npr, ncr;
    npr = findNPR(n, r);
    ncr = npr / findFact(r);
    return ncr;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        long long numberOfElements, lowerLimit, upperLimit;
        cin >> numberOfElements >> lowerLimit >> upperLimit;
        long long leftIndex = 0, rightIndex = numberOfElements - 1, arr[numberOfElements], A = 1, B = 1, cnt = 0, j;
        for (auto &it : arr)
            cin >> it;
        sort(arr, arr + numberOfElements);
        while (arr[leftIndex] + arr[rightIndex] < lowerLimit)
            leftIndex++;
        while (arr[leftIndex] + arr[rightIndex] > upperLimit)
            rightIndex--;
        for (long long i = leftIndex; i < numberOfElements - 1 and (arr[leftIndex] + arr[i + 1]) < lowerLimit; i++)
        {
            A++;
            j = i;
        }
        for (long long i = leftIndex; i <= j; i++)
        {
            for (long long k = i + 1; k <= j; k++)
                if (arr[i] + arr[k] >= lowerLimit)
                    cnt++;
        }
        for (long long i = rightIndex; i > 0 and (arr[rightIndex] + arr[i - 1]) > upperLimit; i--)
        {
            B++;
            j = i;
        }
        for (long long i = j; i <= rightIndex; i++)
        {
            for (long long k = i + 1; k <= rightIndex; k++)
                if (arr[i] + arr[k] <= upperLimit)
                    cnt++;
        }
        cout << findNCR(rightIndex - leftIndex + 1, (long long)2) - findNCR(A, (long long)2) - findNCR(B, (long long)2)+cnt << endl;
    }
}