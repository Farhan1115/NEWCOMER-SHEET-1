#include<stdio.h>
#include<string.h>
int main()
{
    char F1, S1, F2, S2;
    int i, len1, len2;
    scanf("%s %s", &F1, &S1);
    scanf("%s %s", &F2, &S2);
    len1 = S1;
    len2 = S2;
    if( S1==S2 )
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
    return 0;
}
