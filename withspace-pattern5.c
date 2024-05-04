#include<stdio.h>
main()
{
	int a,space,b;
	
	for(a=5; a>=1; a--)    //raw
	{
	for(space=1; space<=5-a; space++)    //space
	{
		printf(" ");
	}for(b=a; b>=1; b--)   //columns
	{
		printf("%d",b);
	}
	printf("\n");
}
}