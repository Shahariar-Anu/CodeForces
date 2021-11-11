#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int arr[5],count=0;
    for(int i=0; i<4; i++)
        cin>>arr[i];
    sort(arr,arr+4);
    for(int i=0; i<4; i++)
    {
        if(arr[i]==arr[i+1])
            count++;
    }
    cout<<count;
    return 0;
}
