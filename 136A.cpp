#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    int k;
    for(int i=1; i<=n; i++){
        cin>>k;
        arr[k]=i;
    }
    for(int i=1; i<=n; i++){
        cout<<arr[i];
    }

}