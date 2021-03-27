#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,y,a,b;
    cin>>x>>y>>a>>b;

    int lcm = (x*y)/__gcd(x,y);
    int countl = (a-1)/lcm;
    int countr = b/lcm;


    cout<<countr-countl<<endl;

    return 0;
}
