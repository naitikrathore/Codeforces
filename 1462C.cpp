#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(t--){
        int n;
        vector<int> ans;
        cin>>n;
        if(n>45){
            cout<<-1<<endl;
        }else{
            for(int i=9; i>=1; i--){
                if(n>=i){
                    ans.push_back(i);
                    n-=i;
                }
            }
            sort(ans.begin(), ans.end());
            for(auto m : ans){
                cout<<m<<endl;
            }

        }
    }
}