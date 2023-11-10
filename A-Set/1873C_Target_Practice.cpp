#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        char arr[11][11];
        int a=0,b=0,c=0,d=0,e=0;
        for(int i=1; i<=10;i++)
            for(int j=1; j<=10; j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='X')
                {
                    if(i==1 || i==10 || j==1 || j==10)
                        a++;
                    else if(i==2 || i==9 || j==2 || j==9)
                        b++;
                    else if(i==3 || i==8 || j==3 || j==8)
                        c++;
                    else if(i==4 || i==7 || j==4 || j==7)
                        d++;
                    else if(i==5 || i==6 || j==5 || j==6)
                        e++;

                }
            }
        cout<<a*1+b*2+c*3+d*4+e*5<<"\n";
    }
    return 0;
}


