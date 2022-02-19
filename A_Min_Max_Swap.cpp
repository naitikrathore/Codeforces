#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int temp=0;
        int arr[n];
        int arr2[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int j=0; j<n; j++){
            cin>>arr2[j];
        }
        for(int i=0; i<n; i++){
            if(arr2[i]>arr[i]){
                temp=arr2[i];
                arr2[i]=arr[i];
                arr[i]=temp;
            }
        }
        int max1=0;
        int max2=0;
        for(int i=0; i<n; i++){
            if(arr[i]>max1)
            max1=arr[i];
            if(arr2[i]>max2)
            max2=arr2[i];
        }

       cout<<max1*max2<<endl;

        }
        
}