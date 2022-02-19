#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int x;
        cin>>n;
         int even=0;
         int odd=0;
         for(int i=0; i<n; i++){
             cin>>x;
             if(x%2==0){
                 even++;
             }else
             odd++;
         }
         if(odd!=0 && even!=0)
         cout<<"NO";
         else
         cout<<"YES";

    }
}