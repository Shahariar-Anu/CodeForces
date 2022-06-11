#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,m, arr[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    cin>>n>>m;
    for(int i=0; i<15; i++)
    {
        if(n==arr[i] && m==arr[i+1])
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
