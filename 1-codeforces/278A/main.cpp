#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n+1);
    int s,t;
    int sum1=0,sum2=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        sum2+=arr[i];
    }
    cin>>s>>t;
    if(s>t){
        int m=s;
        s=t;
        t=m;
    }
    for(int i=s;i<t;i++)sum1+=arr[i];
    if(sum1<(sum2-sum1))cout<<sum1;
    else cout<<sum2-sum1;
    return 0;
}
