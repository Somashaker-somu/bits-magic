#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cout<<"enter a number and position :";
    cin>>n>>p;
    n=n|((p-1)<<1);
    cout<<n;
    return 0;

}
