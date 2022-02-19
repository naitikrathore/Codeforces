#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char f;
    int count=0;
    cin >> s;
    for(int i = 1; i < s.length(); i++){
        if(islower(s[i]))
            count = 1;
    }
    if(count==0){
    for(int j = 0; j < s.length(); j++){
            if(islower(s[j]))
                f=toupper(s[j]);
            else
                f=tolower(s[j]);
            cout<<f;
        }
    }
    else
        cout<<s;
}