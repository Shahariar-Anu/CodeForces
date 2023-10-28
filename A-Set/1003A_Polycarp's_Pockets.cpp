#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,a;
    vector<int>v(101);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v[a]++;
    }
    cout<<*max_element(v.begin(),v.end())<<"\n";
    return 0;
}

