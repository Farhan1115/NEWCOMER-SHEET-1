#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int X, Y;
    long long int sum, subs, multi;
    cin>>X>>Y;
    sum = X+Y;
    multi = X*Y;
    subs = X-Y;
    cout<<X<<" + "<<Y<<" = "<<sum<<endl;
    cout<<X<<" * "<<Y<<" = "<<multi<<endl;
    cout<<X<<" - "<<Y<<" = "<<subs<<endl;

    return 0;
}

