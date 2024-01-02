#include<bits/stdc++.h>
using namespace std;
int getPrecision( string str ) {
    if (str == "+" or str == "-")return 1;
    else if (str == "*" or str == "/")return 2;
    else if (str == "^")return 3;
    else return 0;
}
void infixToPostFix( vector<string>& postFix, string str ) {

    vector<string>data;
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
}
double stringToNumber( string str ) {
    double ans = 0;
    for (auto it : str) {
        if (it >= '0' and it <= '9')
            ans = ans * 10 + it - '0';
    }
    if (str[ 0 ] == '-')
        return -ans;
    else return ans;
}
string numberToString( long long num ) {
    string ans = "";
    if (num < 0)ans = "-";
    while (num) {
        ans += (num % 10) + '0';
        num /= 10;
    }
    reverse( ans.begin(), ans.end() );
    return ans;
}
int main() {
    string str;getline( cin, str );
    str = "( " + str + " )";
    vector<string> postFix;
    stack<string>data;
    infixToPostFix( postFix, str );
    for (auto& it : postFix) {
        if (it == "+") {
            string a, b;
            a = data.top();
            data.pop();
            b = data.top();
            data.pop();
            data.push( numberToString( stringToNumber( b ) + stringToNumber( a ) ) );
        }
        else if (it == "-") {
            string a, b;
            a = data.top();
            data.pop();
            b = data.top();
            data.pop();
            data.push( numberToString( stringToNumber( b ) - stringToNumber( a ) ) );
        }
        else if (it == "*") {
            string a, b;
            a = data.top();
            data.pop();
            b = data.top();
            data.pop();
            data.push( numberToString( stringToNumber( b ) * stringToNumber( a ) ) );
        }
        else if (it == "/") {
            string a, b;
            a = data.top();
            data.pop();
            b = data.top();
            data.pop();
            data.push( numberToString( stringToNumber( b ) / stringToNumber( a ) ) );
        }
        else data.push( it );
    }
    cout << data.top() << endl;
}