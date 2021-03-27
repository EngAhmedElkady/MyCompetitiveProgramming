#include <bits/stdc++.h>
using namespace std;
/**
* name:Ahmed Elkady
* age :20
**/
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MIN 1e-9
#define REP(i,a,b) for(int i=a;i<b;++i)
vector<pair<string, int> > A;

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second > b.second;
}


void sort(map<string, int>& M)
{

    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

}
int main()
{
    ll n;
    cin>>n;
    ll a,b,x,y;
    n--;
    ll x_=-1e9;
    ll y_=1e9;
    cin>>x_>>y_;
    ll x2,y2;
    x2=x_;
    y2=y_;


    while (n--){
        cin>>x>>y;
        if(x<x_){
            x_=x;
        }
        if(x>x2)x2=x;
         if(y<y_){
            y_=y;
        }
        if(y>y2)y2=y;



    }
    if(x2-x_>y2-y_)cout<<(x2-x_)*(x2-x_);
    else cout<<(y2-y_)*(y2-y_);
}
