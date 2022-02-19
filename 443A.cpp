#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    set<char>unq(s.begin(), s.end());
    cout<<unq.size();

}