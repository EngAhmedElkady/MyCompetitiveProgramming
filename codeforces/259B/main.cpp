#include <iostream>

using namespace std;

int main()
{
    int arr[3][3];
    long long mx0=0,mx1=0,mx2=0,mx_max=0;
    for(int i=0;i<3;++i){
        long long ans=0;
        for(int y=0;y<3;++y){
            cin>>arr[i][y];
            ans+=arr[i][y];
        }
        if(i==0)mx0=ans;
        else if(i==1)mx1=ans;
        else if(i==2)mx2=ans;
        if(mx_max<ans)mx_max=ans;
    }
    arr[0][0]=mx_max-mx0+1;
    arr[1][1]=mx_max-mx1+1;
    arr[2][2]=mx_max-mx2+1;

    for(int i=0;i<3;i++){
        for(int y=0;y<3;y++)cout<<arr[i][y]<<" ";
        cout<<endl;
    }

    return 0;
}
