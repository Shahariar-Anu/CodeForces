#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a1,b1;
        int a[4],b[4];
        for(int i=0; i<4; i++)
        {
            cin>>a1>>b1;
            a[i]=a1;
            b[i]=b1;
        }
        sort(a,a+4);
        sort(b,b+4);

        int square =abs(a[0]-a[3]);
        cout<<square*square<<"\n";
    }
    return 0;
}
