#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum;
    int arr[5]={'T','C','O','D','I'};
    while(n--){
        string s;
            if(arr[0]==s[0]){
                  sum=sum+4;
            }else if(arr[1]==s[0]){
                sum=sum+6;
            }else if(arr[2]==s[0]){
                sum=sum+8;
            }else if(arr[3]==s[0]){
                sum=sum+12;
            }else{
                sum=sum+20;
            }
    }
    cout<<sum;

}