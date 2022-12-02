/*
  Steps to develop the application
  Step 1 : understand the problem statement
  Step 2 : write the algo
  Step 3 : Decide the programming lang (C/C++/Java/Python/_____)
  Step 4 : write the program
  Step 5 : Test the program
*/

//Accept N no from user and perform the Addition


//Intput
//Value of N = 5;
//Values : 10 20 30 40 50 

//Output
//Addition is : 150

//Algorithm
/*
   START
       Accept the no of elements from user 
       Allocate the memory to store that no
       Accept the no from that no
       Perform addition of all no
       Display the addition
   END
*/


#include<stdio.h>
#include<stdlib.h>


//Header
///////////////////////////////////////////           
//
//   Application Name : Addition of N num 
//   Input : N num
//   Output : Addition
//   Author : Vidya Trimbake
//   Date : 18 Sep 2022
//   
/////////////////////////////////////////

int main()
{
	int *Arr = NULL;
	int iSize = 0;
	int iSum = 0;
	int i = 0;
	
	printf("Please enter how many elements you want?\n");
	scanf("%d\n",&iSize);
	
	//Allocate the memory
	Arr = (int*)malloc(iSize *sizeof(int));
	
	printf("Memory allocation is succesful\n\n");
	
	printf("Please enter thr elements\n");
	
	for(i=0;i<=iSize;i++)
	{
		scanf("%d",&Arr[i]);
	}
	
	//Perform Addition
	for(i=0;i<=iSize;i++)
	{
		iSum = iSum + Arr[i];
	}
	
	printf("Addition is : %d\n",iSum);
	
	free(Arr);
	printf("Memory gets deallocated");
	
	
	return 0;
}














