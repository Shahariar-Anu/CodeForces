#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    cout<<n/2<<"\n";
    if(n%2==0)
    {
        for(int i=1; i<n/2; i++)
            cout<<"2 ";
        cout<<"2";
    }
    else
    {
        for(int i=1; i<n/2; i++)
            cout<<"2 ";
        cout<<"3";
    }
    return 0;
}
