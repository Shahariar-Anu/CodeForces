#include <bits/stdc++.h>
using namespace std;

int main(){
   ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;

      set<string> dex;

      for(int i=0;i<n-1;i++){
         string temp;
         temp.push_back(s[i]);
         temp.push_back(s[i+1]);
         dex.insert(temp);
      }

      cout<<dex.size()<<endl;
   }
   return 0;
}

