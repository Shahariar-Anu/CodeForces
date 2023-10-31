#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        vector<int>odd;
        vector<int>even;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x%2==0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        for(int i=0; i<odd.size(); i++)
            cout<<odd[i]<<" ";
        for(int i=0; i<even.size(); i++)
            cout<<even[i]<<" ";
        cout<<"\n";
    }
    return 0;
}


