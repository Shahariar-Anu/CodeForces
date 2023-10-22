#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,t,a=0,b=0,c=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>t;
        if(i%3==1)
            a+=t;
        else if(i%3==2)
            b+=t;
        else
            c+=t;
    }
    if(a>b && a>c)
        cout<<"chest\n";
    else if(b>a && b>c)
        cout<<"biceps\n";
    else
        cout<<"back\n";
    return 0;
}

