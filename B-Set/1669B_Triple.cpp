#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int a=0;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==arr[i+1] && arr[i]==arr[i+2])
            {
                cout<<arr[i]<<"\n";
                a=1;
                break;
            }
        }
        if(a==0)
            cout<<-1<<"\n";
    }
    return 0;
}
