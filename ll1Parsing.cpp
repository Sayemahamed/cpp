#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    string s;

    cout << "Enter an input string and (add $ at the end)" << endl;
    cin >> s;

    vector<pair<char, string> > production = {{'E', "TH"}, {'T', "FU"}, {'F', "i"}, {'U', "*FU"}, {'U', "&"}, {'H', "+TH"}, {'H', "&"}};
    map<pair<char, char>, ll> parse_table;

    parse_table[ {'E', 'i'}] = 0;
    parse_table[ {'T', 'i'}] = 1;
    parse_table[ {'F', 'i'}] = 2;
    parse_table[ {'U', '*'}] = 3;
    parse_table[ {'U', '+'}] = 4;
    parse_table[ {'U', '$'}] = 4;
    parse_table[ {'H', '+'}] = 5;
    parse_table[ {'H', '$'}] = 6;

    cout << endl;
    cout << "Stack" << '\t' << "Input" << '\t' << "Action" << endl << endl;

    string stak = "$E";
    cout << stak << '\t' << s << endl;

    while(1)
    {
        ll sz = stak.size();

        if(!isupper(stak[sz - 1]))
        {
            if(stak[sz - 1] == s[0] && s[0] == '$')
            {
                cout << endl << "String is Accepted" << endl;
                break;
            }
            else if(stak[sz - 1] == s[0])
            {
                stak.pop_back();

                string temp;
                for(int i = 1; i < s.size(); i++) temp += s[i];
                s = temp;

                cout << stak << '\t' << s << '\t' << "POP" << endl;
            }
            else
            {
                cout << endl << "String is not Accepted" << endl;
                break;
            }
        }
        else
        {
            if(parse_table.find({stak[sz - 1], s[0]}) == parse_table.end())
            {
                cout << endl << "String is not Accepted" << endl;
                break;
            }
            else
            {
                char c = stak[sz - 1];
                stak.pop_back();

                char left = production[parse_table[ {c, s[0]}]].first;
                string right = production[parse_table[ {c, s[0]}]].second;

                if(right[0] != '&')
                {
                    string rev = right;
                    reverse(rev.begin(), rev.end());
                    stak += rev;
                }

                cout << stak << '\t' << s << '\t' << left << "->" << right << endl;
            }
        }
    }
}
