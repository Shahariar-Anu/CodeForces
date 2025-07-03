#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        int count=(b+1)/2;
        int rem=((b/2)*7)+((b%2)*11);
        int s= max(0, a-rem);

        count+=(s+14)/15;
        cout<<count<<"\n";
    }
    return 0;
}
