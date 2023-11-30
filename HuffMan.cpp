#include<bits/stdc++.h>
using namespace std;
class node {
public:
    long long frequency;
    char character;
    node* small, * large;
    node() {}
    node( long long frequency, char character ) {
        this->frequency = frequency;
        this->character = character;
        small = NULL;
        large = NULL;
    }
    node( const node& temp ) {
        this->frequency = temp.frequency;
        this->character = temp.character;
        this->large = temp.large;
        this->small = temp.small;
    }
};
void print( node* ans, string str ) {
    if (ans->character != '1') {
        cout << ans->character << ' ' << str << endl;
        return;
    }
    // cout << ans->frequency << ' ' << ans->character << endl;
    print( ans->small, str + '0' );
    print( ans->large, str + '1' );
}
int main() {
    string inputString;getline(cin,inputString);
    map<char, long long>frequencyArray;
    multimap<long long, node>dat;
    for (auto& it : inputString)frequencyArray[ it ]++;
    for (auto& it : frequencyArray) {
        node temp( it.second, it.first );
        dat.insert( pair<long long, node >( it.second, temp ) );
    }
    // for (auto& it : dat)cout << it.first <<' '<<it.second.character<< endl;
    while (dat.size() > 1) {
        node temp = dat.begin()->second;
        dat.erase( dat.begin() );
        node ans( dat.begin()->second.frequency + temp.frequency, '1' );
        ans.small = new node( temp );
        ans.large = new node( dat.begin()->second );
        dat.insert( pair<long long, node >( dat.begin()->second.frequency + temp.frequency, ans ) );
        dat.erase( dat.begin() );
    }
    print( &dat.begin()->second, "" );
}