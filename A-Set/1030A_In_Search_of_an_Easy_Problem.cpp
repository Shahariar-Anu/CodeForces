#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
        cin>>arr[i];

    for(int i=1; i<=n; i++)
    {
        if(arr[i]==1)
        {
            cout<<"HARD\n";
            return 0;
        }
    }
    cout<<"EASY\n";
    return 0;
}
