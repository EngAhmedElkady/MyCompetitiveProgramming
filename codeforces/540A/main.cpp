#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s1,s2;
    int num1=0,num2=0;
    cin>>s1>>s2;
    int ans=0,x=0;
    for(int i=0;i<n;i++){
        num1=s1[i]-'0';
        num2=s2[i]-'0';
        if(num1>num2){
            x=num1-num2;
            int y=9-num1+num2+1;
            if(x<y)ans+=x;
            else ans+=y;
        }
        else{
            x=num2-num1;
            int y=num1+1+(9-num2);
            if(x<y)ans+=x;
            else ans+=y;
        }

    }
    cout<<ans;
    return 0;
}
