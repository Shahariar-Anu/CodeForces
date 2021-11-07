#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,k,l,c,d,p,nl,np,m,cd,t,et,a;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    m=(k*l)/nl;
    a=p/np;
    cd=c*d;

    cout<<min(min(m,cd),a)/n<<"\n";
    return 0;
}

