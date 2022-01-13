#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1,c2;
        cin>>n;
        c1=n/3;
        c2=c1;
        if(n%3==1)
            c1++;
        else if(n%3==2)
            c2++;
        cout<<c1<<" "<<c2<<"\n";
    }
    return 0;
}

