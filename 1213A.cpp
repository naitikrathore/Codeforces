#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int even=0;
    int odd=0;
    int x;
    while(n--){
        cin>>x;
        if(x&1)
        odd++;
        else
        even++;
    }
    cout<<min(even,odd);
}