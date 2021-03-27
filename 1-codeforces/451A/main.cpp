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

int x=0;
void fun(){
x++;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int i=0;
    string win="";
    while (n!=0 and m!=0){
        if(i%2==0)win="Akshat";
        else win="Malvika";
        n--;
        m--;
        i++;
    }
    cout<<win;
    return 0;
}
