#include<iostream>
#include<vector>
#include<map>
#include<stack>
using namespace std;
int main()
{
    map<long long, long long>Ans;
    stack<long long>waiting_room;
    vector<long long>data;
    long long t;
    cin >> t;
    for (long long i = 0; i < t; ++i)
    {
        long long int x;
        cin >> x;
        data.push_back( x );
    }
    for (long long i = 0; i < t; ++i)
    {
        while (!waiting_room.empty() && data[ i ] > data[ waiting_room.top() ])
        {
            Ans[ waiting_room.top() ] = data[ i ];
            waiting_room.pop();
        }
        waiting_room.push( i );
    }
    while (waiting_room.size())
    {
        Ans[ waiting_room.top() ] = -1;
        waiting_room.pop();
    }
    for (auto it : Ans)
    {
        cout << data[ it.first ] << " " << it.second << endl;
    }
}
