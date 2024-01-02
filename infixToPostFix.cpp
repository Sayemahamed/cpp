#include<bits/stdc++.h>
using namespace std;
int getPrecision( string str ) {
    if (str == "+" or str == "-")return 1;
    else if (str == "*" or str == "/")return 2;
    else if (str == "^")return 3;
    else return 0;
}
int main() {
    string str;getline( cin, str );
    vector<string>data;
    str = "( " + str + " )";
    vector<string> postFix;
    stack<string>st;
    for (long long i = 0;i < str.length();i++) {
        string temp = "";
        while (i < str.length() and str[ i ] != ' ')temp += str[ i++ ];
        data.push_back( temp );
    }
    for (auto& it : data) {
        if (it == "(")st.push( it );
        else if (it == ")") {
            while (st.top() != "(")postFix.push_back( st.top() ), st.pop();
            st.pop();
        }
        else if (it == "+" or it == "-" or it == "*" or it == "/") {
            while (!st.empty() and getPrecision( it ) <= getPrecision( st.top() ))postFix.push_back( st.top() ), st.pop();
            st.push( it );
        }
        else postFix.push_back( it );
    }
    for (auto& it : postFix)cout << it << ' ';
}