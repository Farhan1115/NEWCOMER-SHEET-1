#include<bits/stdc++.h>
using namespace std;

int main()
{
    char S;
    cin>>S;
    if( S>=65 && S<=90 )
    {
       cout<<S+32<<endl;
    }
    if( S>=97 && S<=122 )
    {
        cout<<S-32<<endl;
    }
    return 0;
}
