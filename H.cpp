#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin>>A>>B;
    if( A==B )
    {
        cout<<"floor "<<A<<" / "<<B<<" = "<<"1"<<endl;
        cout<<"ceil "<<A<<" / "<<B<<" = "<<"1"<<endl;
        cout<<"round "<<A<<" / "<<B<<" = "<<"1"<<endl;
    }
    else
    {
        double ceil1, round1;
        int floor2, ceil2, round2;
        round1 = (double) A/B;
        floor2 = A/B;
        ceil2 = A/B;
        round2 = A/B;
        //cout<<"round 2 : "<<round1-(double)round2<<endl;
        cout<<"floor "<<A<<" / "<<B<<" = "<<floor2<<endl;
        cout<<"ceil "<<A<<" / "<<B<<" = "<<ceil2+1<<endl;
        if( round1-(double)round2>=0.5 )
        {
            cout<<"round "<<A<<" / "<<B<<" = "<<round2+1<<endl;
        }
        else if( round1-(double)round2<0.5 )
        {
            cout<<"round "<<A<<" / "<<B<<" = "<<round2<<endl;
        }
    }
    return 0;
}
