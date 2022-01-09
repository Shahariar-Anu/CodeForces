#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int a[1000] , b[1000];
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i] >> b[i];

    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
        {
            if(a[i] == b[j])
                count++;
        }
    cout<< count << endl;
    return 0;
}
