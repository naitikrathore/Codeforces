#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,u;
    cin>>t;
    
    while(t--){
    cin>>n;
     vector<int>arr;
     vector<int>ar;
     for(int i=0; i<n; i++){
          cin>>u;
          arr.push_back(u);
          ar.push_back(u);
     }
    sort(ar.begin(), ar.end());
    if(arr==ar){
        cout<<"NO"<<endl;
    }else if(arr[0]>=arr[n-1]){
        cout<<"YES"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    


    }
}