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
        int negative=0,zero=0, operation=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i] == -1)
                negative++;
            else if(arr[i] == 0)
                zero++;
        }
        if(negative%2==1)
           operation +=2;

        operation += zero;

        cout<<operation<<"\n";
    }
    return 0;
}
