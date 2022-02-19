#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char string[100];
   
    while(n--){
        cin>>string;
    }
    int i=strlen(string);
    if(i<=10){
        cout<<string;
    }
    else{
        cout<<string;
        cout<<string[0]<<i-2<<string[i-1];
    }
    
}