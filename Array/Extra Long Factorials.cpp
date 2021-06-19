#include<bits/stdc++.h>
#include<vector>
using namespace std;

void multiply(int x, vector<int>&multi)
{
    int carry=0;
    for(auto it=multi.begin(); it!=multi.end(); it++)
    {
        int product=*it*x+carry;
        *it=product%10;
        carry=product/10;
    }
    while(carry)
    {
        multi.push_back(carry%10);
        carry=carry/10;
    }
}

void factorial(int n)
{
    vector<int>res;
    res.push_back(1);
    for(int x=2;x<=n; x++)
    {
        multiply(x,res);    
    }
    reverse(res.begin(),res.end());
    for(auto i=res.begin(); i!=res.end(); i++)
    {
        cout<<(*i);
    }
}

int main()
{
    int n;
    cin>>n;
    factorial(n);
    
}

https://www.hackerrank.com/challenges/extra-long-factorials/problem

