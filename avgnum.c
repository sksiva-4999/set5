#include <stdio.h>

int main()
{
	int a[50];
	int n,i,avg,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	 {
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("%d",avg);
	return 0;
}
