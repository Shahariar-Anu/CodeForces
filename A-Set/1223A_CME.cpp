#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==2)
            cout<<"2\n";
        else if(n%2==0 && n>2)
            cout<<"0\n";
        else
            cout<<"1\n";
    }
    return 0;
}


