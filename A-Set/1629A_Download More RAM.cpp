#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long N, K;
        cin >> N >> K;

        vector<pair<long long, long long> > A(N);

        for (int i = 0; i < N; i++) cin >> A[i].first;
        for (int i = 0; i < N; i++) cin >> A[i].second;

        sort(A.begin(), A.end());

        for (int i = 0; i < N; i++) {
            if (A[i].first <= K) K += A[i].second;
            else break;
        }

        cout << K << "\n";
    }
    return 0;
}
