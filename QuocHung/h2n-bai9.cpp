#include <stdio.h>

int main()
{
	int n, x, a[n+69];
	scanf("%d %d", &n, &x);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++) 
	{
		if(a[i]==x) continue;
		printf("%d ", a[i]);
	}
	return 0;
}
