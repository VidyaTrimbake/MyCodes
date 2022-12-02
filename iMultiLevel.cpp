#include<iostream>
using namespace std;

class Device
{
	public:
		Device()
		{
			cout<<"Inside the Device constructor\n";
		}
		~Device()
		{
			cout<<"Inside the Device destructor\n";
		}
};

class Mobile : public Device
{
	public:
		Mobile()
		{
			cout<<"Inside the Mobile constructor\n";
		}
		~Mobile()
		{
			cout<<"Inside the Mobile destructor\n";
		}
};

class Android : public Mobile
{
	public:
		Android()
		{
			cout<<"Inside the Android constructor\n";
		}
		~Android()
		{
			cout<<"Inside the Android destructor\n";
		}
};

int main()
{
	Android aObj;
	
	return 0;
}
