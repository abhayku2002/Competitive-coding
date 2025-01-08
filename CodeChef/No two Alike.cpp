// https://www.codechef.com/START168D/problems/CPYD

#include <bits/stdc++.h>

using namespace std;

int min_cost_to_make_distinct(int N, vector<int>& A) {
    unordered_map<int, int> first_occ, last_occ;
    for (int i = 0; i < N; i++) {
        if (first_occ.find(A[i]) == first_occ.end()) first_occ[A[i]] = i;
        last_occ[A[i]] = i;
    }

    vector<int> unique_positions;
    for (auto& p : last_occ) unique_positions.push_back(p.second);
    sort(unique_positions.begin(), unique_positions.end());

    vector<int> distinct_prefix(N, 0), distinct_suffix(N, 0);
    set<int> seen;
    for (int i = 0; i < N; i++) {
        seen.insert(A[i]);
        distinct_prefix[i] = seen.size();
    }

    seen.clear();
    for (int i = N - 1; i >= 0; i--) {
        seen.insert(A[i]);
        distinct_suffix[i] = seen.size();
    }

    int cost = 0, i = 0;
    while (i < A.size()) {
        int j = i, max_pos = last_occ[A[i]];
        while (j < A.size() && j <= max_pos) {
            max_pos = max(max_pos, last_occ[A[j]]);
            j++;
        }
        if(j-i!=distinct_prefix[max_pos]-(i==0?0:distinct_prefix[i-1]))
        cost += distinct_prefix[max_pos]-(i==0?0:distinct_prefix[i-1]);
        i = j;
    }

    return cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        cout << min_cost_to_make_distinct(N, A) << "\n";
    }

    return 0;
}