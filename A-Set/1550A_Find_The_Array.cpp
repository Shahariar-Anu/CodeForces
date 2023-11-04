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
        int sum=0, count=0;
        int i=1;
        while(sum<n)
        {
            count++;
            sum+=i;
            i+=2;
        }
        cout<<count<<"\n";
    }
}
