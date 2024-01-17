#include <stdio.h>
#include <unistd.h>
int main()
{
	int p = fork();
	if(p<0)
		printf("error\n");
	else if(p==0)
		printf("child, %d\n", getpid());
	else if(p>0)
		printf("parent, %d\n", getpid());
	printf("Hello\n");
	printf("Child Return Value: %d\n", p);
	printf("Parent Return Value: %d\n", p);
}
