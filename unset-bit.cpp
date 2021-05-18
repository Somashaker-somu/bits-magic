#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,res;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"enter p number: ";
    cin>>p;
    res=n^((p-1)<<1);
    cout<<res;
}   