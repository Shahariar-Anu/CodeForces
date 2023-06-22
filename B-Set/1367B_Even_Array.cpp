#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int even=0,odd=0,good=0;
        int a[n+1];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(a[i]%2==0)
                    good++;
                else
                    even++;
            }
            else if(i%2==1)
            {
                if(a[i]%2==1)
                    good++;
                else
                    odd++;
            }
        }
        if(good==n)
                cout<<"0\n";
            else if(even==odd)
                cout<<even<<"\n";
            else
                cout<<"-1\n";
    }
    return 0;
}
