#include <bits/stdc++.h>
using namespace std;
map<long long, char>DaTa;
bool isPossible( long long target, long long number ) {
    if (number == target)return true;
    if (number > target)return false;
    if (DaTa.find( target ) != DaTa.end()) {
        if (DaTa[ target ] == 'p')return true;
        else if (DaTa[ target ] == 'i') return false;
    }
    if (isPossible( target, number * 10 ) or isPossible( target, number * 20 )) {
        DaTa[ number ] = 'p';
        return true;
    }
    if (DaTa.find( target ) != DaTa.end())
        DaTa[ target ] = 'i';
    return false;
}

int main()
{
    long long num;cin >> num;
    while (num--) {
        long long x;cin >> x;
        if (isPossible( x, 1 ))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}