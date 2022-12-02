#include<iostream>
using namespace std;

class Base
{
   public:
       int A,B;
	   
	   Base()
	   {
	       cout<<"Inside Base constructor\n";
	   }
	   
	   ~Base()
	   { 
	       cout<<"Inside Base destructor\n";
	   }   
	   
	   void fun()
	   {
	       cout<<"Inside Base fun\n";
	   }   
};

class Derived : public Base
{
	public:
	int X,Y;
	
	Derived()
	{
	    cout<<"Inside Derived constructor\n";
	}
	   
	~Derived()
	{ 
	    cout<<"Inside Derived destructor\n";
	}   
	   
	void gun()
	{
	    cout<<"Inside Derived gsun\n";
	}   
};
class DerivedX : public Derived
{
	public:
	int P,Q;
	
	DerivedX()
	{
	    cout<<"Inside DerivedX constructor\n";
	}
	   
	~DerivedX()
	{ 
	    cout<<"Inside DerivedX destructor\n";
	}   
	   
	void run()
	{
	    cout<<"Inside DerivedX run\n";
	}   
};

int main()
{
	cout<<"Size of base : "<<sizeof(Base)<<"\n";  
	cout<<"Size of base : "<<sizeof(Derived)<<"\n"; 
	cout<<"Size of base : "<<sizeof(DerivedX)<<"\n"; 
	
	DerivedX dobj;
	
	dobj.fun();
	dobj.gun();
	dobj.run();
	

    return 0;
}	
