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
        long long int arr[n+1];
        long long int sum1=0, sum2=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
                sum1+=arr[i];
            else
                sum2+=abs(arr[i]);
        }
        cout<<abs(sum1-sum2)<<"\n";
    }
    return 0;
}

