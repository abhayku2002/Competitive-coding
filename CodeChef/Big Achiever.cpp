"""
Link: https://www.codechef.com/START168D/problems/BIG

"""

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> scores1(n);
    
    for (int i = 0; i < n; i++) {
        cin >> scores1[i];
    }
    
    vector<int> result;
    int maxscor = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (scores1[i] > maxscor) {
            result.push_back(1);
            maxscor = scores1[i];
        } else {
            result.push_back(0);
        }
    }
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}