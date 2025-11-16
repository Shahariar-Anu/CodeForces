#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        bool sorted=true;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                sorted=false;
                break;
            }
        }
        if(!sorted)
            cout<<"0\n";
        else
        {
            int dif=1e9;
            for(int i=0; i<n-1; i++)
            {
                dif=min(dif,abs(arr[i]-arr[i+1]));

            }
            cout<<(dif/2)+1<<"\n";
        }
    }
}
