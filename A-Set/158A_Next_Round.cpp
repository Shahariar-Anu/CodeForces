#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    int n,k,count=0;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0;  i<n; i++)
        if(arr[i]>=arr[k-1] && arr[i]>0)
            count++;

    cout<<count;
    return 0;
}
