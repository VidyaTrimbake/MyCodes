#include<iostream>
#include<stdlib.h>

struct Demo
{
	int i;
	float f;
	
};

int main()
{
	struct Demo obj;
	
	struct Demo *ptr = NULL;
	ptr = (struct Demo*)malloc(sizeof(struct Demo));
	
	obj.i = 10;
	obj.f = 9.11;
	
	ptr->i = 10;
	ptr->f = 9.11;
	
	printf("%d\n",obj.i);
	printf("%f\n",obj.f);
	
	printf("%d\n",ptr->i);
	printf("%f\n",ptr->f);
	
	free(ptr);

	
	return 0;

 } 
