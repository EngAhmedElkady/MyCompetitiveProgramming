#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    v=arr;
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0;i<n;i++){
        for(int y=0;y<n;y++){
            if(arr[i]==v[y]){
                cout<<y+1<<" ";
                break;
            }
        }
    }
    return 0;
}
