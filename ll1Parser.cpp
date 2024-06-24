#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<char, string>>productionRules = { {'E', "TH"},{'T',"FU"},{'F',"i"},{'U',"&"},{'U',"*FU"},{'H',"&"},{'H',"+TH"} };
    map<pair<char, char>, int>parsingTable = {
        {{'E','i'},0},
        {{'T','i'},1},
        {{'F','i'},2},
        {{'U','$'},3},
        {{'U','*'},4},
        {{'H','$'},5},
        {{'H','+'},6},
        {{'U','+'},3},
        {{'H','*'},3}
    };
    cout << "Enter the string: ";
    string input, Stack = "$E";
    cin >> input;
    cout << endl << "Stack\tInput\tAction" << endl;
    cout << Stack << "\t" << input << "\t" << endl;
    int lastIndex;
    while (true) {
        lastIndex = Stack.length() - 1;
        if (isupper( Stack[ lastIndex ] )) {
            if (parsingTable.find( { Stack[ lastIndex ], input[ 0 ] } ) != parsingTable.end()) {
                int index = parsingTable[ { Stack[ lastIndex ], input[ 0 ] } ];
                Stack.pop_back();
                char symbol = productionRules[ index ].first;
                string production = productionRules[ index ].second;
                reverse( production.begin(), production.end() );
                if (production != "&")
                    Stack += production;
                reverse( production.begin(), production.end() );
                cout << Stack << "\t" << input << "\t" << symbol << "->" << production << endl;
            }
            else {
                cout << "Parsing failed" << endl;
                break;
            }
        }
        else {
            if (lastIndex == 0 and input[ 0 ] == '$' and Stack[ 0 ] == '$') {
                cout << endl << "Accepted" << endl;
                break;
            }
            else if (Stack[ lastIndex ] == input[ 0 ]) {
                Stack.pop_back();
                input.erase( input.begin() );
                cout << Stack << "\t" << input << "\t" << "PoP" << endl;
            }
            else {
                cout << "Parsing failed" << endl;
                break;
            }
        }
    }
}