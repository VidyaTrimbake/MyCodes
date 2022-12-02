#include<iostream>
//using namespace std;
	
namespace Marvellous
{
	Marvellous::Demo
	{
		public:
			int i, j;
			void fun()
			{
				std::cout<<"Inside fun of Demo from Marvellous\n";
			}	
	};	
	Marvellous::Hello 
	{
		public:
			int x,Y;
	};
}
	
namespace Infosystems
{
	Infosystems Demo
	{
		public:
			int a,b;
			void fun()
			{
				std::cout<<"Inside fun of Demo from Infosystems\n";
			}	
	};
}


int main()
{
	Marvellous::Demo obj1;
	obj1.fun();
	Infosystems::Demo obj2;
	obj2.fun();
	
	using namespace Marvellous
	Hello hobj;
	Demo obj4;
		
	return 0;
}	
