#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int left=0,right=n-1,sum1=0, sum2=0,z=0;
    while(left<=right)
    {
        if(z%2==0)
        {
            if(a[left]>a[right])
            {
                sum1+=a[left];
                left++;
            }
            else
            {
                sum1+=a[right];
                right--;
            }
        }
        else
        {
            if(a[left]>a[right])
            {
                sum2+=a[left];
                left++;
            }
            else
            {
                sum2+=a[right];
                right--;
            }
        }
        z++;
    }
    cout<<sum1<<" "<<sum2<<"\n";
    return 0;
}
