#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,a=0,d=0;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    for(int i=0; i<n; i++)
    {
        if(ch[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton\n";
    else if(d>a)
        cout<<"Danik\n";
    else
        cout<<"Friendship\n";
    return 0;
}
