#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(auto &it:v)cin>>it;
	    set<int>s;
	    s.insert(0);
	    int pref=0;
	    int ans=0;
	    for(int &it:v){
	        pref^=it;
	        if(s.count(pref)){
	            pref=0;
	            ans++;
	            s.clear();
	            s.insert(0);
	        }
	        else{
	            s.insert(pref);
	        }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
