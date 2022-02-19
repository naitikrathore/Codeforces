#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int x1=c-d;
        int x2=c+d;
        int y1=a-b;
        int y2=a+b;

        if((y2*n>= x1) && (y1*n<=x2)){
          cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

}