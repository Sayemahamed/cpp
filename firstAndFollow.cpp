#include<bits/stdc++.h>
using namespace std;
void getFirst( map<char, vector<string>>& rules, map<char, string>& first, char left ) {
    if (first.find( left ) != first.end())return;
    first[ left ] = "";
    for (auto& it : rules[ left ]) {
        if (islower( it[ 0 ] ) or it[ 0 ] == '&')
            first[ left ] += it[ 0 ];
        else {
            getFirst( rules, first, it[ 0 ] );
            string res = first[ it[ 0 ] ];
            int i = 1;
            while (res.find( '&' ) != string::npos and i < it.length() and it[ i ] != left) {
                res.replace( res.find( '&' ), 1, "" );
                first[ left ] += res;
                getFirst( rules, first, it[ i ] );
                res = first[ it[ i++ ] ];
            }
            first[ left ] += res;
        }
    }
    sort( first[ left ].begin(), first[ left ].end() );
    first[ left ].erase( unique( first[ left ].begin(), first[ left ].end() ), first[ left ].end() );
}
void getFollow( map<char, vector<string>>& rules, map<char, string>& first, map<char, string>& follow ) {
    follow[ 'S' ] = "$";
    for (auto& it : rules) {
        for (auto& it2 : it.second) {
            for (int i = it2.length() - 1;i > 0;i--) {
                if (islower( it2[ i ] ) and isupper( it2[ i - 1 ] )) {
                    follow[ it2[ i - 1 ] ] += it2[ i ];
                }
                else if (isupper( it2[ i ] ) and isupper( it2[ i - 1 ] )) {
                    follow[ it2[ i - 1 ] ] += first[ it2[ i ] ];
                    if (first[ it2[ i ] ].find( '&' ) != string::npos)
                        follow[ it2[ i - 1 ] ] += follow[ it2[ i ] ];
                }
            }
        }
    }
    for (auto& it : rules) {
        for (auto& it2 : it.second) {
            if (isupper( it2[ it2.length() - 1 ] )) {
                follow[ it2[ it2.length() - 1 ] ] += follow[ it.first ];
            }
        }
    }
    for (auto& it : rules) {
        for (auto& it2 : it.second) {
            for (int i = it2.length() - 1;i > 0;i--) {
                if (islower( it2[ i ] ) and isupper( it2[ i - 1 ] )) {
                    follow[ it2[ i - 1 ] ] += it2[ i ];
                }
                else if (isupper( it2[ i ] ) and isupper( it2[ i - 1 ] )) {
                    follow[ it2[ i - 1 ] ] += first[ it2[ i ] ];
                    if (first[ it2[ i ] ].find( '&' ) != string::npos)

                        follow[ it2[ i - 1 ] ] += follow[ it2[ i ] ];
                }
            }
        }
    }
    for (auto& it : follow) {
        sort( it.second.begin(), it.second.end() );
        it.second.erase( unique( it.second.begin(), it.second.end() ), it.second.end() );
    }
}
int main() {
    // cout << "Enter the number of production rules :- ";
    int n;cin >> n;
    map<char, vector<string>>rules;
    map<char, string>first, follow;
    for (int i = 0;i < n;i++) {
        // cout << "Enter production rule " << i + 1 << " :- ";
        string rule;cin >> rule;
        char left = rule[ 0 ];
        string right = rule.substr( 2 );
        for (int j = 0;j < right.length();j++) {
            string str = "";
            while (right[ j ] != '|' && j < right.length())str += right[ j++ ];
            rules[ left ].push_back( str );
        }
    }
    // for(auto&it:rules){
    //     for(auto&it2:it.second)cout << it.first << " -> " << it2 << endl;
    // }
    for (auto& it : rules)
        getFirst( rules, first, it.first );
    getFollow( rules, first, follow );
    cout << "First " << endl;
    for (auto& it : first)cout << it.first << " -> " << it.second << endl;
    cout << "Follow " << endl;
    for (auto& it : follow) {
        cout << it.first << " -> ";
        for (auto& it2 : it.second)cout << (it2 == '&' ? ' ' : it2);
        cout << endl;
    }
}
/*
here & is epsilon
test case 1
6
S=ABCDE
A=a|f|g
B=bB|&
C=cC|&
D=dD|&
E=eE|&

test case 2
6
S=Bb
S=Cd
B=ab
B=b
C=cC
C=c
*/