#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        count=n/10;
        if(n%10==9)
            count++;
        cout<<count<<"\n";
    }
    return 0;
}
