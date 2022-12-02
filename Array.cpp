#include<iostream>
using namespace std;

class Array
{
	public:
		int iSize;
		int *Arr;
		
		Array(int iLength = 10)
		{
			iSize = iLength;
			Arr = new int[iSize]; //Here new is dynamically memory allocation
		}
		
		~Array()
		{
			cout<<"Inside the destructor\n";
			delete []Arr;
		}
		void Accept()
		{
			cout<<"Enter the value\n";
			int i = 0;
			
			for(i = 0; i<iSize;i++)
			{
				cin>>Arr[i];
			}
		}
		void Display()
		{
			cout<<"Elements of array are: \n";
			int i = 0;
			
			for(i = 0; i<iSize;i++)
			{
				cout<<Arr[i]<<"\n";
			}
		}
		void Summation()
		{
			int iSum = 0, i = 0;
			
			for(i = 0; i<iSize;i++)
			{
				iSum = iSum + Arr[i];
			}
		}
};

int main()
{
	cout<<"Inside the main\n";
	int iRet = 0;
	Array obj1(4);
	
	obj1.Accept();
	obj1.Display();
	iRet = obj1.Summation();
	
	cout<<"Summation of all elemente : "<<iRet<<"\n";
	
	return 0;
}
