#include<stdio.h>
main()
{		int a, rev=0 ,d=0;
		printf("Enter a number ");
		scanf("%d",&a);	
		while (a>0)
		{		d=a%10;
				rev=rev*10+d;
				a=a/10;					
		}
		printf("Reversed number is %d",rev);
}
