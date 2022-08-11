#include<stdio.h>
int main()
{
    double X;
    scanf("%lf", &X);
    if( X>=0.0 && X<=25.0 )
    {
        printf("Interval [0,25]\n");
    }
    else if( X>25.0 && X<=50.0 )
    {
        printf("Interval (25,50]\n");
    }
    else if( X>50.0 && X<=75.0 )
    {
        printf("Interval (50,75]\n");
    }
    else if( X>75.0 && X<=100.0 )
    {
        printf("Interval (75,100]\n");
    }
    else
    {
        printf("Out of Intervals\n");
    }
    return 0;
}
