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
vector<pair<int, int> > A;

bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.first < b.first;
}


void sort(map<int, int>& M)
{

    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

}
int main()
{
    int counter=0;
    int n;
    cin >> n;
    int arr[n];
	REP(i,0, n)	cin >> arr[i];

	sort(arr, arr+n);
	REP(i,0,n){
		REP(i,0,n){
			if(arr[i] < arr[j] && !vis[j]){
				counter++;
				vis[j] = 1;
				break;
			}
		}
	}
	cout << counter;
    return 0;
}
