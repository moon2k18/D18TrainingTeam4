#include <stdio.h>
int main(){
	long long n, s;
	scanf("%lld",&n);
	s=n*(n+1)*(2*n+1)/6;
	printf("%lld",s);
}
