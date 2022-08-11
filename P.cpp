#include<stdio.h>
#include<string.h>
int main()
{
    char S[4];
    gets(S);
    int i, len;
    if( S[0]%2==0 )
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}
