#include<iostream>
using namespace std;

int Multiplication(int iValue1, int iValue2)
{
	int iMult = 0;
	iMult = iValue1*iValue2;
	return iMult;
}
int main()
{
	int iNo1,iNo2= 0;
	int iAns = 0;
	
	cout<<"Enter first number : ";
	cin>>iNo1;
	
	cout<<"Enter second number : ";
	cin>>iNo2;
	
	iAns = Multiplication(iNo1,iNo2);
	
	cout<<"Multiplication is : "<<iAns<<endl;
	
	return 0;
}
