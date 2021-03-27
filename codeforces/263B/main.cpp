#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end(),greater<int>());
    if(k>n)cout<<-1;
    else cout<<arr[k-1]<<" "<<0;

    return 0;
}
