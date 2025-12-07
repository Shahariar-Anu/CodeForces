#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],sum=0;
        for(int i=0; i<n-1; i++)
        {
            cin>>arr[i];
            sum +=arr[i];
        }
        cout<<-sum<<"\n";
    }
}
