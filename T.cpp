#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin>>A>>B>>C;
    if( A<=B && A<=C )
    {
        if(B<=C)
        {
            cout<<A<<endl<<B<<endl<<C<<endl;
        }
        else
        {
            cout<<A<<endl<<C<<endl<<B<<endl;
        }
    }
    else if( B<=A && B<=C )
    {
        if(A<=C)
        {
            cout<<B<<endl<<A<<endl<<C<<endl;
        }
        else
        {
            cout<<B<<endl<<C<<endl<<A<<endl;
        }
    }
    else if( C<=A && C<=B )
    {
        if(A<=B)
        {
            cout<<C<<endl<<A<<endl<<B<<endl;
        }
        else
        {
            cout<<C<<endl<<B<<endl<<A<<endl;
        }
    }
    cout<<endl<<A<<endl<<B<<endl<<C<<endl;
    return 0;
}
