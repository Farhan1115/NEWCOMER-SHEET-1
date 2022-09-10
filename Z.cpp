#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int A, B, C, D;
    cin>>A>>B>>C>>D;
    double x = (double) B * log (A);
    double y = (double) D * log (C);
    if( x>y )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
