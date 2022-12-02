#include<iostream>
using namespace std;

class Demo
{
	private:
		static int i;
	public:
		void fun()
		{
			i++;
			cout<<i<<endl;
		}		
};

int Demo :: i = 100;

int main()
{
	Demo obj1, obj2;
	obj1.fun();
	obj2.fun();
}
