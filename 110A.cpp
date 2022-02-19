#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
     int n;
     cin>>n;
     int digit;
    
    while(n){
        digit = n%10;
        n /= 10;
        if(digit==4 && digit==7){
            cout<<'YES'<<endl;
        }else{
            cout<<'NO'<<endl;
        }
    }

 }