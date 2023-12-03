#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int N,n;
    cin>>n;
    N=n;
    if(n<=10 && n%4!=0)
    {
        if(n<4)
            cout<<4<<"\n";
        else if(n<8)
            cout<<8<<"\n";
        else
            cout<<13<<"\n";
        return 0;
    }
    while(true)
    {
        int sum=0;
        while(n>=10)
        {
            sum += n%10;
            n/=10;
            if(n<10)
                sum+=n;
        }
        if(sum%4==0)
        {
            cout<<N<<"\n";
            break;
        }
        else
        {
            N++;
            n=N;
        }
    }
    return 0;
}


