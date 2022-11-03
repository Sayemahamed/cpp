#include<bits/stdc++.h>
using namespace std;
int main() {
        int n = 100000;
        int sqrtN = 317;
        bool prime[n + 1];
        memset(prime, 1, sizeof(prime));
        for (int p = 2; p <= sqrtN; p++) {
                if (prime[p]) {
                        for (int i = p * p; i <= n; i+=p) {
                                prime[i] = 0;
                        }
                }
        }
        int primeCount[n + 1];
        primeCount[0] = 0;
        primeCount[1] = 0;
        for (int i = 2; i <= n; i++) {
                primeCount[i] = primeCount[i - 1] + prime[i];
        }
        int tc;
        scanf("%d", &tc);
        while (tc--) {
                int m;
                scanf("%d", &m);
                printf("%d\n", primeCount[m]);
        }
}