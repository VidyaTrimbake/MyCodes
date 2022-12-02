#include<iostream>
using namespace std;

class Maths
{
	public:
	int iNo1;
	int iNo2;
	
	Maths()
	{
		iNo1 = 0;
	    iNo2 = 0;
	}
	
	Maths(int A,int B)
	{
		iNo1 = A;
		iNo2 = B;
	}
	
	int Addition()
	{
		return iNo1 + iNo2;
	}
	
	int Subtraction()
	{
		return iNo1 - iNo2;
	}
	
};

int main()
{
	Maths mobj1;
	Maths mobj2(10,11);
	
	int ret = 0;
	
	ret = mobj1.Addition();
	cout<<"Addition is : "<<ret<<"\n";
	 
	ret = mobj2.Addition();
	cout<<"Addition is : "<<ret<<"\n";
	
	return 0;

		
}
