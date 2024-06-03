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
        vector<int>vec(n);
        map<int,int>mp;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>vec[i];
            sum+=vec[i];
            mp[vec[i]%3]++;
        }
        if(sum%3==0)
            cout<<0<<"\n";
        else if(sum%3==2)
            cout<<1<<"\n";
        else if(sum%3==1 && mp[1]>0)
            cout<<1<<"\n";
        else
            cout<<2<<"\n";
    }
}
