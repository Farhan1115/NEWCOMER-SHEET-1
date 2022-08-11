#include<bits/stdc++.h>
using namespace std;

int main()
{
    double X;
    cin>>X;
    if( X>=0.0 && X<=25.0 )
    {
        cout<<"Interval [0,25]\n";
    }
    else if( X>25.0 && X<=50.0 )
    {
        cout<<"Interval (25,50]\n";
    }
    else if( X>50.0 && X<=75.0 )
    {
        cout<<"Interval (50,75]\n";
    }
    else if( X>75.0 && X<=100.0 )
    {
        cout<<"Interval (75,100]\n";
    }
    else
    {
        cout<<"Out of Intervals\n";
    }
    return 0;
}
