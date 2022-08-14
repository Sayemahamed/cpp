#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  
  map<string,int> mp;
  queue<string> q;
  
  mp[s]=0;
  q.push(s);
  
  while(!q.empty()){
    string current=q.front();q.pop();
    if(current=="atcoder"){
      cout << mp[current] << "\n";
      return 0;
    }
    
    for(int i=1;i<7;i++){
      string next=current;
      swap(next[i-1],next[i]);
      if(mp.find(next)==mp.end()){
        q.push(next);
        mp[next]=mp[current]+1;
      }
    }
  }
  return 0;
}
