#include<stdio.h>

int main(void) {
	int a[50];
	int n,i,j,t;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0; i < n;i++) 
        {
 
            for (j = i + 1; j < n; j++)
            {
 
                if (a[i] > a[j]) 
                {
 
                    t =  a[i];
                    a[i] = a[j];
                    a[j] = t;
 
                }
 
            }
 
        }
     
     
     	printf("%d ",a[0]);
     	printf("%d",a[n-1]);
     
     
	
	return 0;
}
