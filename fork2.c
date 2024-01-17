#include <stdio.h>
#include <unistd.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int p=fork();
	if(p<0)
	{
		printf("error");
	}
	else if(p==0)
	{
		for(int i=0; i<n; i++)
			if(i%2==0)
				printf("%d ", arr[i]);
		printf("\n");
	}
	else if(p>0)
	{
		for(int i=0; i<n; i++)
			if(i%2!=0)
				printf("%d ", arr[i]);
		printf("\n");
	}
	return 0;
}
