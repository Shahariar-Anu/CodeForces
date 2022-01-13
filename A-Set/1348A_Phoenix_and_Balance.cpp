#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int sum1=0,sum2=0;
        for(int i=1; i<(n/2); i++)
            sum1+=pow(2,i);
        for(int i=n/2; i<n; i++)
            sum2+=pow(2,i);
        sum1+=pow(2,n);
        cout<<abs(sum1-sum2)<<"\n";
    }
    return 0;
}
