#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    int b[m+1];
    for(int i=0; i<m; i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    cout<<a[n-1]<<" "<<b[m-1]<<"\n";
}

