#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,a[100000],b[100000],k;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	sort(a,a+n)	;sort(b,b+m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(b[j]<a[i]){
				k=b[j];
				b[j]=a[i];
				a[i]=k;
			}
		}
	}
	sort(b,b+m);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	for (i=0;i<m;i++){
		printf("%d ",b[i]);
	}
}


