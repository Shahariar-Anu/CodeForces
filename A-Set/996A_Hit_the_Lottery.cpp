#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,count=0;
    int a[]={100,20,10,5,1};
    cin>>n;
    for(int i=0; i<5; i++)
    {
        count+=n/a[i];
        n=n%a[i];
    }
    cout<<count;
    return 0;
}
