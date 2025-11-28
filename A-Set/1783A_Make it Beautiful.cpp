#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        swap(arr[0], arr[1]);
        swap(arr[n - 1], arr[0]);

        if (arr[0] == arr[1])
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";

            cout << "\n";
        }
    }
}
