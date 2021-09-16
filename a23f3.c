#include <stdio.h>
#include "simpio.h"

int main()
{
    int num,i;

    printf("Enter number:\n");
    num=GetInteger();

    if(num%2==0)
    { for(i=0;i<=num;i+=2)
    {
        printf("%d ",i);
    }
    }
    else
        for(i=1;i<=num;i+=2)
    {
        printf("%d ",i);
    }
    system("PAUSE");
    return 0;
}
