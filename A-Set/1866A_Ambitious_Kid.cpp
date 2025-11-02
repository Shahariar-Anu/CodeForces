#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    int b= 1e9;
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
        b = min(b, abs(a[i]-0));
    }
    cout<<b;

    return 0;
}
