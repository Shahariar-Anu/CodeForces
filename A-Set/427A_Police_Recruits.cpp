#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,police=0,untreated=0;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
            police+=arr[i];
        else
        {
            if(police<1)
                untreated++;
            else
                police--;
        }
    }
    cout<<untreated;
    return 0;
}
