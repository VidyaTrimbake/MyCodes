#include<iostream>
using namespace std;

class Demo 
{
	public:
		int A, B;
		
		Demo(int i=0, int j=0)
		{
			A = i;
			B = j;
		}
};

int main()
{
	Demo X(10,20);
	Demo Y(10,20);
	Demo Ans(10,20);
	
	Ans = A + B;
	
	return 0;
	
}
