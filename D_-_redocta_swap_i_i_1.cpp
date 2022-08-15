#include <bits/stdc++.h>
using namespace std;
map<char, int>value={{'a',1},{'t',2},{'c',3},{'o',4},{'d',5},{'e',6},{'r',7}};
int main()
{
  string s;
  cin >> s;
  int ans=0;
  for (int i=0; i<7; ++i)
  {
    for (int j=i+1; j<7; ++j)
    {
      if(value[s[i]]>value[s[j]])
      {
        swap(s[i], s[j]);
        ans++;
      }
    }
  }
  cout << ans<<endl;
}