#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>m;
    for(int i=0; i<n-1; i++){
        m[s.substr(i,2)]++;
    }
    int max=0;
    string si="";
    for (auto x : m){
        if(x.second>max){
            max=x.second;
            si=x.first;
        }
    }
    cout<<si;
}