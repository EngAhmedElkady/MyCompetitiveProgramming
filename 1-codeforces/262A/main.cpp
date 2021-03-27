#include <bits/stdc++.h>

using namespace std;

int main()
{
   //A. Roma and Lucky Numbers
   int n,k;
   cin>>n>>k;
   int cnt=0;
   string s;
   int ans=0;
   for(int i=0;i<n;i++){
   cin>>s;
   cnt=0;
   for(int y=0;y<s.length();y++){
    if(s[y]=='4' or s[y]=='7')cnt++;
   }
   if(cnt<=k)ans++;
   }
   cout<<ans;
    return 0;
}
