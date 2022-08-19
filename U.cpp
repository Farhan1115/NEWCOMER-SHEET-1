#include<bits/stdc++.h>
using namespace std;

int main()
{
    float N, remaining;
    cin>>N;
    remaining = N - (int) N;
    if( remaining==0 )
    {
        cout<<"int"<<" "<<(int) N<<endl;
    }
    else
    {
        cout<<"float"<<" "<<(int) N<<" "<<fixed<<setprecision(3)<<remaining<<endl;
    }
    return 0;
}
