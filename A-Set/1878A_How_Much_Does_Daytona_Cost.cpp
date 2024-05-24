#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int>vec(n);
        for(int i=0; i<n; i++)
        {
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        if(binary_search(vec.begin(), vec.end(),k))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
