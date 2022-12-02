#include<iostream>
using namespace std;

class Demo
{
	public:
		static const int i;
		
		static fun()
		{
			cout<<"Value of i is : "<<Demo::i<<"\n";
		}
};

const int Demo :: i = 10;

int main()
{
	Demo :: fun();
	return 0;
}
