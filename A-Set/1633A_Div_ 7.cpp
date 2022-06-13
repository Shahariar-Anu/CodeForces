#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%7==0)
            cout<<n<<"\n";
        else
        {
            int a=n%7;
            int b=7-a;
            if((n%10)+b<10)
                cout<<n+b<<"\n";
            else
                cout<<n-b<<"\n";
        }
    }
    return 0;
}
