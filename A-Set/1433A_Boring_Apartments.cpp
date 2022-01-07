#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,count=0,digit;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=0;
        digit= n%10;
        while(n>0)
        {
            n/=10;
            count++;
        }
        if(count==1)
            cout<<((digit*10)-10)+1<<"\n";
        else if(count==2)
            cout<<((digit*10)-10)+3<<"\n";
        else if(count==3)
            cout<<((digit*10)-10)+6<<"\n";
        else if(count==4)
            cout<<((digit*10)-10)+10<<"\n";
    }
    return 0;
}
