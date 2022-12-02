#include<iostream>
using namespace std;

class Base
{
	private:
		int i;
	protected:
		int j;
		
	public: Base()
	{
		i = 10;
		j = 20;
	}		
};
class Derived : public Base
{
	public:
		void fun()
		{
			cout<<i;
			cout<<j;
		}
};

int main()
{
	Derived dobj;
	dobj.fun();
	
	return 0;
}
