#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    for(int i=0; i<n; i++){
    int m=min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
    int k=max(abs(arr[0]-arr[i]),abs(arr[n-1]-arr[i]));
    cout<<m<<" "<<n<<endl;
    }
}