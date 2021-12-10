#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,p,q,arr[200],count=0;
    cin>>n>>p;
    for(int i=0; i<p; i++)
        cin>>arr[i];
    cin>>q;
    for(int i=p; i<p+q; i++)
        cin>>arr[i];
    sort(arr,arr+(p+q));
    for(int i=0; i<p+q; i++)
    {
        if(arr[i]!=arr[i+1])
            count++;
    }
    if(n==count)
        cout<<"I become the guy.\n";
    else
        cout<<"Oh, my keyboard!\n";
    return 0;
}
