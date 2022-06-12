#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        long long int x=0,y=0;
        if(a<=b)
            x=b-a+1;
        if(a<=c)
            y=c-a+1;
        cout<<max(x,y)<<" ";
        x=0,y=0;
        if(b<=a)
            x=a-b+1;
        if(b<=c)
            y=c-b+1;
        cout<<max(x,y)<<" ";
        x=0,y=0;
        if(c<=a)
            x=a-c+1;
        if(c<=b)
            y=b-c+1;
        cout<<max(x,y)<<" ";
        cout<<"\n";
    }
    return 0;
}
