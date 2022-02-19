#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        int dif=d-sum;
        if(dif%5!=0){
          cout<<-1;
        }
        else
        cout<<dif/5;
    }
}

