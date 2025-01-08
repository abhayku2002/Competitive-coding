// https://www.codechef.com/START168D/problems/BINREM

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll countInversions(const string &s) {
    ll ones = 0, inversions = 0;
    for (char c : s) {
        if (c == '1') ones++;
        else inversions += ones;
    }
    return inversions;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;
        string S;
        cin >> S;
        
        ll inversions = countInversions(S);
        if (inversions <= X && inversions % K == 0) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
    return 0;
}