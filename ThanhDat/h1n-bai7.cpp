#include <stdio.h>
int main()
{
	long long a;
	printf ("nhap so 0 <= a <10^18 : ");
	scanf ("%lld", &a);
	switch (a)
		{
			case 0 : printf("zero");
			break;
			case 1 : printf("one");
			break;
			case 2 : printf("two");
			break;
			case 3 : printf("three");
			break;
			case 4 : printf("four");
			break;
			case 5 : printf("five");
			break;
			case 6 : printf("six");
			break;
			case 7 : printf("seven");
			break;
			case 8 : printf("eight");
			break;
			case 9 : printf("nine");
			break;
			case 10 : printf("ten");
			break;
			default : printf("greater than ten");
		}

return 0;
}
