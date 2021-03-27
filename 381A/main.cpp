#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int> > A;
bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.first > b.first;
}

void sort(map<int, int>& M)
{

    // Declare vector of pairs


    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }

    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);

    // Print the sorted value
}
int main()
{
    //B. Sereja and Stairs
    int n;
    cin>>n;
    int x;
    map<int,int>mp;
    list<int> myList{};
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    sort(mp);
    int m=0;
    for(auto i:A){
        if(m==0){
        myList.push_back(i.first);
        m=1;
        }
        else{
            if(i.second==1)        myList.push_back(i.first);
             else{
                        myList.push_back(i.first);
                        myList.push_front(i.first);

             }
        }
    }
    cout<<myList.size()<<endl;
    for (auto i = myList.begin(); i!= myList.end(); ++i)
      cout <<*i<<" ";


    return 0;
}
