#include<bits/stdc++.h>
using namespace std;

int main()
{
 string n;
 cin>>n;

 unordered_map<char,int>m;
 for(int i=0; i<n.length(); i++)
 m[n[i]]++;

 if(m['A']>m['D'])
    cout<<"Anton"<<endl;
    else if(m['A']<m['D']) 
    cout << "Danik" << endl;
    else 
    cout << "Friendship" << endl;
 


 





}
