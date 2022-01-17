#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long int n, m, num, t;
    cin >> t;
    while (t--)
    {
        long long int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2] >> n;
        sort(arr, arr + 3);
        long long int dif = arr[2] - arr[0];
        dif += arr[2] - arr[1];

        if(n >= dif)
        {
            n -= dif;
            if(n % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
}
