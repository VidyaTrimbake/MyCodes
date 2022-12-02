#include<iostream>
using namespace std;

//Call by value
void fun(int no)
{
	cout<<"Inside call by value : "<<no<<"\n";
	no++;
}

//call by address
void gun(int *p)
{
	cout<<"Inside call by address : "<<*p<<"\n";
	(*p)++;
}

//Call by reference
void sun(int &ref)
{
	cout<<"Inside call by reference : "<<ref<<"\n";	
	ref++;
}


int main()
{
	int i = 10;
	int j = 10;
	int k = 10;
	
	fun(i);   //fun(10);
	cout<<i<<"\n";
	gun(&j);  //gun(200);
	cout<<j<<"\n";
	sun(k);   //sun(k);
	cout<<k<<"\n";
	
	return 0;
}
