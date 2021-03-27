#include <bits/stdc++.h>

using namespace std;

int main()
{
    // fast code
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,d ;
    cin>>n>>d;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    if(d<=(n-1)*10)cout<<-1;
    else {
        int ans=0;
        int jok=0;
        for(int i=0;i<n-1;i++){
            if(d>0){
                d-=(arr[i]+10);
                jok+=2;
            }
        }
        d=d-arr[n-1];
        cout<<d<<endl;
        if(d>10){

            jok+=(d/5);
        }
        else if(d>5)jok+=1;
        cout<<jok;
    }

    return 0;
}
