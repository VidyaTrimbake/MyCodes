#include<iostream>
using namespace std;

class Demo
{
	private:
		int i;
	public:
		static void fun(int i)
		{
			i++;
			cout<<i<<endl;
		}		
};



int main()
{
	Demo obj;
	obj.fun(10
	0);
	return 0;
	
}
