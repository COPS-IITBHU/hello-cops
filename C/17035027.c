#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d=1;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    for(c=1;c<=b;c++)
    {

        d=d*a;
    }
    printf("ans is %d",d);

    return 0;
}
