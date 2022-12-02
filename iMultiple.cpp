#include<iostream>
using namespace std;

class TwoWheeler
{
	public:
		TwoWheeler()
		{
			cout<<"Inside the TwoWheeler constructor\n";
		}
		~TwoWheeler()
		{
			cout<<"Inside the TwoWheeler destructor\n";
		}
};

class FourWheeler
{
	public:
		FourWheeler()
		{
			cout<<"Inside the FourWheeler constructor\n";
		}
		~FourWheeler()
		{
			cout<<"Inside the FourWheeler destructor\n";
		}
};

class Vehicle : FourWheeler, TwoWheeler
{
	public:
		Vehicle()
		{
			cout<<"Inside the Vehicle constructor\n";
		}
		~Vehicle()
		{
			cout<<"Inside the Vehicle destructor\n";
		}
};

int main()
{
	Vehicle vObj;
	return 0;
}
