#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define all(x)  x.begin(), x.end()
#define rall(x)  x.rbegin(), x.rend()
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
//data types//
struct node
{
    long long connectedNode;
    long long weight;
    node( long long connectedNode, long long weight ) {
        this->connectedNode = connectedNode;
        this->weight = weight;
    }
    node() {
        connectedNode = -1;
        weight = -1;
    }
};

//----------------------------------------------------------------//
// helper functions //
void dijkstra( vector<node>graph[], vector<node>& parent, long long startingNode ) {
    parent[ startingNode ].weight = 0;
    parent[ startingNode ].connectedNode = -1;
    multimap<long long, node > pq;
    node first( startingNode, 0 );
    pq.insert( { 0, first } );
    return 0;
}

//----------------------------------------------------------------//
// solve function//
void solve() {
    long long numberOfNodes;
    cin >> numberOfNodes;
    vector<node > graph[ numberOfNodes + 1 ];
    for (long long i = 0;i < numberOfNodes;i++) {
        long long numberOfEdges, x, y, weight;
        cin >> numberOfEdges;
        while (numberOfEdges--) {
            cin >> x >> y >> weight;
            node a( x, weight );
            node b( y, weight );
            graph[ x ].push_back( b );
            graph[ y ].push_back( a );
        }
    }
    vector<node > parent( numberOfNodes + 1 );
    dijkstra( graph, parent, numberOfNodes );
}

//----------------------------------------------------------------//
// main function//
int main() {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    long long test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
}
