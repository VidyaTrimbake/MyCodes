#include<iostream>
using namespace std;
class Demo
{
	public:
	int fun()
	{
		return 10;
	}
	
	char fun(char a)
	{
		return 'a';
	}
};
int main()
{
	Demo dObj;
	dObj.fun();
	dObj.fun(a);
	
	return 0;
}
