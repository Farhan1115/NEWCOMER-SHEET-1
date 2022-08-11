#include<bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin>>X;
    if( X>=48 && X<=57 )
    {
        cout<<"IS DIGIT\n";
    }
    if( X>=65 && X<=90 )
    {
        cout<<"ALPHA\nIS CAPITAL\n";
    }
    if( X>=97 && X<=122 )
    {
        cout<<"ALPHA\nIS SMALL\n";
    }
    return 0;
}
