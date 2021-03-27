#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s1=0,s2=0,s3=0;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(i%2==0)s1+=x;
        else if(i%2==1)s2+=x;
        else s3+=x;
    }
    if(s1>s2 and s1>s3)cout<<"chest";
    else if(s2>s1 and s2>s3)cout<< "biceps";
    else cout<< "back";
    return 0;
}
