#include<iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout<<"Inside the Base constructor\n";
		}
		~Base()
		{
			cout<<"Inside the Base destructor\n";
		}
};

class Derived : public Base
{
	public:
		Derived()
		{
			cout<<"Inside the Derived constructor\n";
		}
		~Derived()
		{
			cout<<"Inside the Derived destructor\n";
		}
};

int main()
{
	Derived dObj;
	return 0;
}
