#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,c;
    cin>>n>>t>>c;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int ans=0;
    int x;
    for(int i=0;i<=n-c;i++){
            x=0;
        for(int y=i;y<i+c;y++){
            if(arr[y]<=t)continue;
            x=1;
        }
        if(x==0)ans++;
    }
    cout<<ans;
    return 0;
}
