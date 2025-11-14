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
        int arr[n+1];
        int pos=0, neg=0, operation=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
                pos++;
            else
                neg++;
        }
        while((neg%2==1) || (pos<neg))
        {
            operation++;
            pos++;
            neg--;
        }
        cout<<operation<<"\n";

    }
}
