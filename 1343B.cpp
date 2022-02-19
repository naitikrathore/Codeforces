#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    
    int sum,sum1;
    while(t--){
        cin>>n;
        if(n%4==0)
            cout<<"YES";
        else
            cout<<"NO";
        int arr[n];
        for(int i=0; i<n/2; i++){
            int k=2;
            arr[i]=k;
            sum+=k;
            k+=2;
        }
        for(int i=n/2; i<n-1; i++){
             int p=1;
             arr[i]=p;
             sum1+=p;
             p+=2;
        }
        while(sum==sum1){
            int p=1;
            arr[n-1]=p;
            sum1+=p;
            p+=2;
        }
        cout<<arr<<endl;
    }
}