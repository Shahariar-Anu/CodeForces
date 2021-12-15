#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,sum=0;
    string s;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        if(s=="Icosahedron")
            sum+=20;
        else if(s=="Cube")
            sum+=6;
        else if(s=="Tetrahedron")
            sum+=4;
        else if(s=="Octahedron")
            sum+=8;
        else if(s=="Dodecahedron")
            sum+=12;
    }
    cout<<sum;
    return 0;
}
