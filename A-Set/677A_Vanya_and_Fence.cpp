#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,h,count=0;
    cin>>n>>h;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]>h)
            count+=2;
        else
            count++;
    }
    cout<<count;
    return 0;
}
