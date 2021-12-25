#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int arr[4];
    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    int a=arr[3]-arr[0];
    int b=arr[3]-arr[1];
    int c=arr[3]-arr[2];
    cout<<a<<" "<<b<<" "<<c<<"\n";
    return 0;
}

