#include <iostream>

using namespace std;

int main()
{
    int n;
    int k,m;
    cin>>n>>k>>m;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            if(k>0)k--;
            else ans++;
        }
        else if(arr[i]==2){
            if(m>0)m--;
            else if(k>0)k--;
            else ans++;

        }
    }
    cout<<ans;
    return 0;
}
