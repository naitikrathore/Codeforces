#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    int count;

    for(int i=0; i<n; i++){
        cin>>k;
        if(k!=10)
        count++;
        else if(k!=01)
        count++;

    }
cout<<count;

}