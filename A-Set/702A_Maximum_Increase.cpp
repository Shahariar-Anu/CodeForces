#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    long long a=1,b=1;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]<arr[i+1])
            a++;
        else
            a=1;
        if(a>b)
            b=a;
    }
    cout<<b;
    return 0;
}
