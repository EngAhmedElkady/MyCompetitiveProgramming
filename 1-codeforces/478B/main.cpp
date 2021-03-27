#include <bits/stdc++.h>

using namespace std;

int main()
{
    // fast code
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    if(m==1)cout<<((n-1)*n/2)<<" "<<((n-1)*n/2);
    else{
       int f=n-(m-1);
       int y=ceil(float(n)/m);
        cout<<(y-1)*(y)/2<<" "<<((f-1)*f/2);

    }

  //  __int128_t x=122222222222222222222222222;
    return 0;
}
