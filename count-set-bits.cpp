#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N ;
    cout<<"enter a number :";
    cin>>N;
    int count=0;
    while(N!=0)
    {
        if(N&1==1)
        count++;
        N=N>>1;
    }
cout<<"the number of set bits is"<<"  "<<count++;
return 0;
}




     