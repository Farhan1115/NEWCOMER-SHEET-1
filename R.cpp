#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, A;
    cin>>N;
    cout<<N/365<<" years\n";
    A = N%365;
    cout<<A/30<<" months\n";
    A = A%30;
    cout<<A<<" days\n";
    return 0;
}
