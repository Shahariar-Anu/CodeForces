#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%3==0)
            cout<<"Second"<<"\n";
        else
            cout<<"First"<<"\n";
    }
}

