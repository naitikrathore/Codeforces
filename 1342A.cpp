#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        if(x>y){
            swap(x,y);
        }
        long long result1 = 0, result2 = 0;
        result1= x*a + y*a;
        long long z = y - x;
        result2 = z*a + x * b;
        cout<<min(result1,result2)<<endl;
    }
}
