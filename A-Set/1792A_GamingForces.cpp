#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n, num=0, a;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a==1)
            num++;
        }
        cout<<n-(num/2)<<"\n";
    }
}
