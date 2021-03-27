#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----- Write Code Here -----//
    int n, sit = 0, up = 0, res = 0;
    cin>>n;
    string s;
    cin>>s;
    for(auto x: s){
        if(x == 'x')sit++;
        else up++;
    }
    if(sit == up){
        cout<<res<<"\n"<<s;
    }else{
        res = (sit - up)/2;
        char change = (res < 0)?'x':'X';
        int j = abs(res), i = 0;
        while(j > 0){
            if(s[i] != change){
                s[i] = change;
                j--;
            }
            i++;
        }
        cout<<abs(res)<<"\n"<<s;
    }

    return 0;
}
