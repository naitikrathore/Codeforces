#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        vector<int>arr;
        int m=0;
        for(int i=0; i<n; i++){
            cin>>x;
            m=max(m,x);
            arr.push_back(x);
        }
        int pos=0;
        for(int i=0; i<n; i++){
            if((arr[i]>arr[i-1] && arr[i]==m) && (i>0)){
           pos=i+1;
           break;
        }else if( (arr[i]>arr[i+1] && arr[i]==m) && (i<n-1) ){
                pos = i+1;
                break;
            }
        }
        if(pos > 0){
            cout<<pos<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    }
