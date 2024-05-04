#include<stdio.h>
main()
{
	int a,space,b;
	
	for(a=1; a<=5; a++)    //row
	{
	for(space=a; space<5; space++)    //space
	{
		printf(" ");
	}for(b=1; b<=a; b++)   //columns
	{
		printf("%d",space-a+1);
	}
	printf("\n");
}
}