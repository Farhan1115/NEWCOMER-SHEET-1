#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, X, Min=100000, Max=-100000;
    for( i=1; i<=3; i++ )
    {
        cin>>X;
        if( Min>X )
        {
            Min = X;
        }
        if( Max<X )
        {
            Max = X;
        }
    }
    cout<<Min<<" "<<Max;
    return 0;
}
