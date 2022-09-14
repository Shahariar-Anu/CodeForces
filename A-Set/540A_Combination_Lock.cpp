#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    string a,b;
    cin>>n>>a>>b;
    int mov=0;
    for(int i=0; i<n; i++)
    {
        mov+=min(10-(abs(a[i]-b[i])),abs(a[i]-b[i]));
    }
    cout<<mov<<"\n";;
    return 0;
}

