#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        int count=0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            if(arr[i]!=i)
            count++;
        }
        if(count==0)
        cout<<0<<endl;
        else if(arr[1]==1 || arr[n]==n)
        cout<<1<<endl;
        else if(arr[1]==n && arr[1]==1)
        cout<<2<<endl;
        else if(arr[1]!=1 && arr[n] !=n)
        cout<<2<<endl;




    }


}
