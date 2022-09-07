#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int A, B, C, D;
    cin>>A>>B>>C>>D;
    long long int f = A%100;
    long long int a = B%100;
    long long int r = C%100;;
    long long int h = D%100;
    long long int Multi = f*a*r*h;
    long long int Last_Two_Digits = Multi%100;
    if( Last_Two_Digits/10==0 )
    {
        cout<<"0"<<Last_Two_Digits<<endl;
    }
    else
    {
        cout<<Last_Two_Digits<<endl;
    }
    return 0;
}
