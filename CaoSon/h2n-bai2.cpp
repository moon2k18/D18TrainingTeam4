#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,i,dem=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n % i == 0)
		{
			dem++;
		}
	}
	printf("%d",dem);
}


