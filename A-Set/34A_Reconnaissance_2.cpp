#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<int>values(n);
    for(int i=0; i<n; i++)
        cin>>values[i];
    int mn=2e9, l=0, r=0;
    for(int i=0; i<n-1; i++)
    {
        if(mn>abs(values[i+1]-values[i]))
        {
            l=i+1;
            r=l+1;
            mn=abs(values[i+1]-values[i]);
        }
    }
    if(mn>abs(values[n-1]-values[0]))
    {
        l=1;
        r=n;
    }
    cout<<l<<" "<<r<<"\n";

}

