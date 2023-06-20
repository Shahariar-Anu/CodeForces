#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int odd=0,even=0;
        cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            if(x%2==0)
                even++;
            else
                odd++;
        }
    cout<<min(even,odd)<<"\n";
    }
}
