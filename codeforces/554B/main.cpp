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
int main(){
    int n;
    cin>>n;
    string s;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        cin>>s;
        mp[s]++;
    }
    sort(mp);
    cout<<A[0].second;

    return 0;
}
