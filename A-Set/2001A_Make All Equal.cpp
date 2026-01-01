#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> frequencyMap;

    for(int i = 0; i < n; i++)
    {
        int value = arr[i];
        frequencyMap[value]++;
    }

    int maxFrequency = 0;

    for(map<int, int>::iterator it = frequencyMap.begin(); it != frequencyMap.end(); ++it)
    {
        maxFrequency = max(maxFrequency, it->second);
    }

    cout << n - maxFrequency << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
