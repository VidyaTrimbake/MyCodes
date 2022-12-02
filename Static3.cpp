#include<iostream>
using namespace std;

class Demo
{
	public:
		static int i;
		static 
		int j;
		
		Demo()
		{
			i = 0;
			j = 0; 
		}
		
		static void fun()
		{
			cout<<"Inside the static function\n";
			cout<<"Value of i is : "<<i<<"\n";
			cout<<"Value of j is : "<<j<<"\n";
		}
};

int Demo :: i = 10;
int Demo :: j = 11;

int main()
{
//	Demo :: fun();
	
	return 0;
}
