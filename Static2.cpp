#include<iostream>
using namespace std;

class Demo
{
	public:
        //characteristics
		int i;             //Instance Variables(Non static)
		int j;                                                  
		static int k;      //Class Variables(Static)
		static int l;
		
		Demo()             //Default Constructor
		{
			i = 0;
			j = 0;
		}
		
		Demo(int a, int b) //Paramertised Constructor
	    {
			i = a;
			j = b;
		}
		
		//Behaviours
		void fun()           //Non-static method  (Behaviour)
		{
			cout<<"\nInside Non-static method gun\n";
			cout<<"Value of i : "<<this->i<<"\n";
			cout<<"Value of j : "<<this->j<<"\n";
			cout<<"Value of k : "<<k<<"\n";		
			cout<<"Value of l : "<<l<<"\n";
		
		}
		
		static void gun()    //Static Method    (Behaviour)
		{
			cout<<"\nInside static method gun\n";
			cout<<"Value of k : "<<k<<"\n";		
			cout<<"Value of l : "<<l<<"\n";
		}
};

//load time variables
int Demo :: k = 0;
int Demo :: l = 10;

int main()
{
	
	Demo::gun();
	Demo obj1(10,11);
	Demo obj2(20,21);
	Demo obj3;
	
	cout<<"Value of i in obj1 : "<<obj1.i<<"\n";   //10
	cout<<"Value of i in obj2 : "<<obj2.i<<"\n";   //20
	cout<<"Value of i in obj3 : "<<obj3.i<<"\n";
	
	
	cout<<"Value of j in obj1 : "<<obj1.j<<"\n";  
	cout<<"Value of j in obj2 : "<<obj2.j<<"\n";
	cout<<"Value of j in obj3 : "<<obj3.j<<"\n";
	
	obj1.fun();  //fun(obj1);
	obj2.fun();
	
	obj1.gun();   //Demo::gun()
	
	
	return 0;
}

//size of object is summation of sizes of its non static characteristics.
//sizeof(obj) = sizeof(i) +  sizeof(j);
// sizeof(obj) = 4 + 4;
// sizeof(obj) = 8;










