#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        int total = 1;
        for(int i=0; i<n; i++)
            if (a[i]>b[i])
                total += (a[i] - b[i]);
        cout<<total<<"\n";
    }
    return 0;
}
