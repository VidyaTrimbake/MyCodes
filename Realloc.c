#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = NULL;
    int *q = NULL;
	 	
	p = (int*)malloc(10*sizeof(int));
	
	q = (int*)realloc(p, 15*sizeof(int));
	if(q == NULL)
	{
		printf("Realloc Fails");
		q = p;
	}
	
	{
		printf("Realloc Success");
	}
	
	
	free(p);
	
	return 0;
	
}	
