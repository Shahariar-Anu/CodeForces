#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        for(int i=0; i<n; i++)
        {
            int x = max(a[i],b[i]);
            int y = min(a[i],b[i]);
            a[i]=x, b[i]=y;
        }
        cout<<*max_element(a,a+n)*(*max_element(b,b+n))<<"\n";
    }
    return 0;
}
