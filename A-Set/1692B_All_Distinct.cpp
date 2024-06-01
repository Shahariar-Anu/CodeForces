#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        int x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            mp[x]++;
        }
        int count=mp.size();
        if((n-count)%2)
            count--;
        cout<<count<<"\n";
    }
}
