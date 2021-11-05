#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int min=arr[0];
    int max=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            count++;
        }
        else if(arr[i]<min)
        {
            min=arr[i];
            count++;
        }
    }
    cout<<count;
    return 0;
}
