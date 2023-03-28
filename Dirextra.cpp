#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpi = vector<pii>;
using vpl = vector<pll>;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((int)(v).size())
#define nl '\n'
#define dg(x) cerr << #x << " = " << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll numberOfNodes, numberOfEdges;
    cin >> numberOfNodes >> numberOfEdges;

    vector<vector<pair<ll, ll>>> graph(numberOfNodes + 1);
    for (int i = 0; i < numberOfEdges; i++)
    {
        ll nodeA, nodeB, CostOfAB;
        cin >> nodeA >> nodeB >> CostOfAB;
        graph[nodeA].push_back({nodeB, CostOfAB});
        graph[nodeB].push_back({nodeA, CostOfAB});
    }

    vector<ll> distance(numberOfNodes + 1, LLONG_MAX);
    vector<ll> parent(numberOfNodes, -1);

    priority_queue<pll, vpl, greater<pll>> pq;

    distance[1] = 0;
    pq.push({0, 1});

    while (!pq.empty())
    {
        ll currentNode = pq.top().second;
        ll currentNodeDistance = pq.top().first;
        pq.pop();

        if (currentNodeDistance != distance[currentNode])
            continue;
        for (auto &i : graph[currentNode])
        {
            ll childNode = i.first;
            ll childNodeDistance = i.second;
            if (childNodeDistance + currentNodeDistance < distance[childNode])
            {
                parent[childNode] = currentNode;
                distance[childNode] = currentNodeDistance + childNodeDistance;
                pq.push({distance[childNode], childNode});
            }
        }
    }
    for (int i = 1; i <= numberOfNodes; i++)
        cout << distance[i] << " ";
    cout << endl;

    vector <int> ans;

    for (int i = numberOfNodes; i != -1; i = parent[i])
        ans.push_back(i);

    reverse(ans.begin(), ans.end());

    for (auto &i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}