#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
   ll first_score = 0;
	ll second_score = 0;
	ll last;

	for(ll i=0;i<n;i++){
		ll s;
		cin>>s;
		if(s<0){
			second_score += -s;
		}
		else{
			first_score += s;
		}
		if(i==n-1){
			if(s<0){
				last = 2;
			}
			else{
				last = 1;
			}
		}
	}

	if(first_score>second_score){
		cout<<"first";
		return 0;
	}
	if(second_score>first_score){
		cout<<"second";
		return 0;
	}

	if(first_score==second_score){
		if(last==2){
			cout<<"second";
		}
		else if(last==1){
			cout<<"first";
		}
		return 0;
	}


    return 0;
}
