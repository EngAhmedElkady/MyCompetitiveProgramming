#include <iostream>

using namespace std;

int main()
{
int n; cin>>n;
int m=n;
int ans=0,prev=0;
while (n--) {
	int x; cin>>x;
	ans+=abs(x-prev)+1;
	prev=x;
}
cout<<ans+m-1;
     return 0;
}
