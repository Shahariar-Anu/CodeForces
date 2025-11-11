#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n==2)
        {
            int dif=abs(arr[0]-arr[1]);
            if(dif>=2)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
            cout<<"No\n";
    }
}
