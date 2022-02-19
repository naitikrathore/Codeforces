#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string, string>final;
    string a,b;
    for(int i=0; i<m; i++){
        cin>>a>>b;

        if(b.length()>a.length())
            final[a]=b;
            else 
            final[a]=b;
    }
    for(int i=0; i<n; i++){
        cin>>a;
        cout<<final[a]<< " ";
    }
cout<<endl;
}