#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char S;
    cin>>A>>S>>B;
    if( S=='+' )
    {
        cout<<A+B<<endl;
    }
    if( S=='-' )
    {
        cout<<A-B<<endl;
    }
    if( S=='*' )
    {
        cout<<A*B<<endl;
    }
    if( S=='/' )
    {
        cout<<A/B<<endl;
    }
    return 0;
}
