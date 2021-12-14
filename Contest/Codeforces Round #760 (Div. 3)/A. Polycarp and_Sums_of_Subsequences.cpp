#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    int arr[t+1];
    while(t--)
    {
        for(int i=0; i<7; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]+arr[1]+arr[2]==arr[6])
            cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
        else if(arr[0]+arr[1]+arr[3]==arr[6])
            cout<<arr[0]<<" "<<arr[1]<<" "<<arr[3]<<endl;
    }
    return 0;
}
