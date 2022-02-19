#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char c[3];
int main(){
    int n;
    cin>>n;
    int count =0;
    while(n--){
    cin>>c;
    if(c[1]=='+'){
      count++;
    } else{
        count--;
    }
}
    cout<<count<<endl;
}