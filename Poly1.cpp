#include<iostream>
using namespace std;

class Overloading
{
	public:
		//Add@2ii
		int Add(int a,int b)              //1000
		{
			cout<<"Addition of 2 integers\n";
		}
		
		//Add@2ff
		float Add(float a,float b)        //2000
		{
			cout<<"Addition of floats\n";
			return a+b;
		}
		
		//Add@2dd
		double Add(double a,double b)     //3000
		{
			cout<<"Addition of doubles\n";
			return a+b;
		}
		
		//Add@3iii	
		int Add(int a,int b,int c)         //4000
		{
			cout<<"Addition of 3 integers\n";
			return a+b+c;
		}
		
		void Fun(int a,float b)
		{
			
		}
		void Fun(float x,int y)
		{
			
		}
};

int main()
{
	Overloading obj;
	int i;
	float f;
	double d;
	
	obj.Add(11,21);        //call 1000
	obj.Add(11,21,31);     //call 4000
	return 0;
}





/*
sizeof('A')     //1
sizeof(11)      //4
sizeof(88.01)   //8
sizeof(88.90f)  //4


int i = 10;
printf("%d",i);            //10
printf("%d",sizeof(++i));  //4
*/





















