#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,a=0,b=1000,max,min;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]>a)
        {
            a=arr[i];
            max=i;
        }
        if(arr[i]<=b)
        {
            b=arr[i];
            min=i;
        }
    }
    if(max>min)
        cout<<(max-1)+(n-min)-1;
    else
        cout<<(max-1)+(n-min);
    return 0;
}
