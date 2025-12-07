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
        int arr[n],opt=0;

        for(int i=0; i<n; i++)
            cin>>arr[i];

        for(int i=0; i<n-1; i++)
            opt += (arr[i]%2 == arr[i+1]%2);
        cout<<opt<<"\n";
    }
}

