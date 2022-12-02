#include<stdio.h>

int main()
{
	int Arr[4] = {11,12,13,14};
	
	printf("%d\n",sizeof(Arr));    
		printf("%d\n",sizeof(Arr[2])); //4
		
		printf("%d\n",Arr[2]);      //51
		printf("%d\n",Arr);         //100
		printf("%d\n",&Arr);        //100
		
		printf("%d\n",Arr+1);       //104
		printf("%d\n",(&Arr)+1);	//116
			
		printf("%d\n",Arr[2]);
		printf("%d\n",*(Arr + 2));	//* indicate data of that base address
		
		printf("%d\n",Arr[2]);
		printf("%d\n",*(Arr + 2));
		printf("%d\n",Arr));
		printf("%d\n",Arr[2]);
		
		return 0;
}
/*
  *(Arr + 2)
  *(100 + 2*sizeof(int));
  *(100 + 2*4)
  *(100 + 8)
  *(108)
*/
