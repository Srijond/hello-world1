
#include<stdio.h>

int main()
{
    long int d;
    scanf("%ld",&d);
    if(d%7==0)printf("FRI\n");
    else if(d%7==1)printf("SAT\n");
    else if(d%7==2)printf("SUN\n");
    else if(d%7==3)printf("MON\n");
    else if(d%7==4)printf("TUE\n");
    else if(d%7==5)printf("WED\n");
    else if(d%7==6)printf("THU\n");


    return 0;

}








