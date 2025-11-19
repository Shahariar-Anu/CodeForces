#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a;
        int gold=0, given=0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a>=k)
                gold += a;
            else if(a==0 && gold>0)
            {
                gold--;
                given++;
            }
        }
        cout<<given<<"\n";
    }
}
