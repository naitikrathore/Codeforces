#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int sum=0;
        int sum2=0;
        int sum3=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
            sum2+=arr[i]/x;
            if(arr[i]%x!=0)
            sum2++;
        }
          sum3=(sum/x);
          if(sum % x!=0)
          sum3++;

        cout<<sum<<" "<<sum2<<endl;
    }
}
