#include <stdio.h>


void noelTree(int h)
{

	for(int i=1;i<=h;i++)
	{
	
		for(int j=1;j<=h-i;j++)
		{
			printf(" ");
		}
	
		for(int k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	

}

int main()
{
	int a;
	scanf("%d",&a);
	noelTree(a);
	return 1;
}
