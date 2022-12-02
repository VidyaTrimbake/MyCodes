#include<iostream>
using namespace std;

class Base1
{
	public:
		int A,B;
		
		Base1()
		{
			cout<<"Base1 constructor\n";
		}
		
		~Base1()
		{
			cout<<"Base1 destructor\n";
		}
		
		void fun()
		{
		    cout<<"Inside the fun\n";	
		}
};

class Base2
{
	public:
		int X,Y;
		
		Base2()
		{
			cout<<"Base2  constructor\n";
		}
		
		~Base2()
		{
			cout<<"Base2e destructor\n";
		}
		
		void gun()
		{
			cout<<"Inside the gun\n";
		}
};

class Derived : public Base1, public Base2 
{
	public:
		int P,Q;
		
		Derived()
		{
			cout<<"Derived constructor\n";
		}
		
		~Derived()
		{
			cout<<"Derived destructor\n";
		}
		
		void run()
		{
			cout<<"Inside the run\n";
		}		
};
int main()
{
	cout<<"Size of base1 : "<<sizeof(Base1)<<"\n";  
	cout<<"Size of base2 : "<<sizeof(Base2)<<"\n"; 
	cout<<"Size of Derived : "<<sizeof(Derived)<<"\n"; 
	
	Derived dobj;
	
	dobj.fun();
	dobj.gun();
	dobj.run();
	

	
	return 0;
}
