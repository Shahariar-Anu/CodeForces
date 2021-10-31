#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
            a++;
        else if(s[i]=='2')
            b++;
        else if(s[i]=='3')
            c++;
    }
    for(int i=0; i<a; i++)
    {
        cout<<"1";
        if(i==(a-1) && b==0 && c==0)
            break;
        else
            cout<<"+";
    }
    for(int i=0; i<b; i++)
    {
        cout<<"2";
        if(i==(b-1) && c==0)
            break;
        else
            cout<<"+";
    }
    for(int i=0; i<c; i++)
    {
        cout<<"3";
        if(i==(c-1))
            break;
        else
            cout<<"+";
    }
    return 0;
}
