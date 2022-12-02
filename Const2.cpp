#include<iostream>
using namespace std;

class Demo 
{
	public:
		int i;
		int j;
		const int k = 11;
		const int l = 12;
		
		// Default constructor
		Demo() : k(11), l(12)
		{
			i = 51;
			j = 101;
		}
		
		// Parameterised constructor
		Demo(int a, int b, int c, int d) : k(c), l(d)
		{
			i = 51;
			j = 101;
		}
};
int main()
{
	Demo Obj1;
	Demo Obj2(10,20,30,40);
    //Obj1.k++;  NA
    //Obj2.k++;  NA
    Obj1.i++;
    Obj2.i++;
	return 0;
}
