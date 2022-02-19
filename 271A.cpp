#include<bits/stdc++.h>
using namespace std;

int main(){
int y;
cin>>y;

for (int i=y + 1;; i++){
    string s=to_string(i);
    set<int>unq(s.begin(),s.end());
    if(unq.size()==s.length()){
        cout<<i<<endl;
        break;
    }
}         
}