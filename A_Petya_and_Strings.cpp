#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    int k=0;
    cin>>str1>>str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    for(int i=0;str1[i]!='\0';i++)
    {
        if((int)str1[i]<(int)str2[i])
        {
            k=-1;
            break;
        }
         else if((int)str1[i]>(int)str2[i])
        {
            k=1;
            break;
        }
    }
    cout<<k;
    return 0;