#include<stdio.h>
using namespace std;

class Demo
{
	public:
		int i,j;
		
		//Parameterised constructor with DEFAULT values
		Demo(int x =10, int y=20)
		{
			i = x;
			j = y;
		}
		void fun()
		{
			i++;
			j++;
		}
		void gun() const
		{
			i++;
			j++;
		}
};

int main()
{
	Demo obj1;         //10  20
	Demo obj2(11);     //11  20
	Demo obj3(11,21);  //11  21
	
	
	return 0;
}
