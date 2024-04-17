#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char>arr = {'R', 'O', 'Y', 'G', 'I', 'B', 'V'};
    int j = 0;
    for(int i = 0; i < n; i++) {
        cout << arr[j++];
        if(j == 7) j -= 4;
    }
}
