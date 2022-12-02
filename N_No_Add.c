#include<stdio.h>       // For printf and scanf
#include<stdlib.h>      // For malloc and free

//////////////////////////////////////////////////////////
//
//  Application Name : Addition of N numbers
//  Input :     N numbers
//  Output :    Addition
//  Author :    Piyush Manohar Khairnar
//  Date :      18 September 2022
//
//////////////////////////////////////////////////////////

int main()
{
    int *Arr = NULL;        // Poiter to hold the address of array
    int iSize = 0;          // Variable to hold size of array
    int i = 0;              // Loop counter
    int iSum = 0;           // To hold the addition

    printf("Please enter how many elements you want?\n");
    scanf("%d",&iSize);

    // Allocate the memory
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("Memory allocation is succesful\n");

    printf("Please enter the elements\n");
    
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }

    // Perform addition
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    printf("Addition is : %d\n",iSum);

    free(Arr);
    printf("Memory gets deallocated.\n");
    
    return 0;
}
