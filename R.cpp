#include<stdio.h>
int main()
{
    int N, A;
    scanf("%d", &N);
    printf("%d years\n", N/365);
    A = N%365;
    printf("%d months\n", A/30);
    A = A%30;
    printf("%d days\n", A);
    return 0;
}
