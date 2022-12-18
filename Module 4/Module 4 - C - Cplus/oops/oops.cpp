#include<iostream>
#include<string.h>
using namespace std; 

class input
{
	public:
	char x[20],y[20],name[20];
	int guest,min;
	
	void input1()
	{
	cout<<"***************Event Management System***************\n";
	
	cout<<"Enter The Name of The Event:";
	cin>>x;

	if(!strcmp(x,"wedding"))
	{
	cout<<"Enter The Customer First & Last Name:";
	cin>>name>>y;
	cout<<"Enter The Numbers of The Guests:";
	cin>>guest;
	cout<<"Enter The Number of Minutes In The Event:";
	cin>>min;
	}
	else
	{
		cout<<"This is only for wedding.";
	}
	}
};
class cost : public input
{
	public:
		float cph=18.50,cpm=.40,cod=20.70,server,cost1,cost2,costsev,food,avg,total,deptamt;
		
		void cos()
		{
		server=(guest*1)/20;
		cost1=(min/60)*cph;
		cost2=(min%60)*cpm;
		costsev=cost1+cost2;
		food=guest*cod;
		avg=food/guest;
		total=food+(costsev*server);
		deptamt=total*.25;
		cout<<"\n\n***************Event Estimate for:"<<name<<" "<<y;
		cout<<"***************\n";
		cout<<"";
		cout<<"\nNumber of Server:"<<server;
		cout<<"\nThe Cost For Servers:"<<costsev;
		cout<<"\nThe Cost For Food Is:"<<food;
		cout<<"\nAverage Cost Per Person:"<<avg;
		cout<<"";
		cout<<"\nTotal Cost is:"<<total;
		cout<<"";
		cout<<"\nPlease deposite a 25% deposit to reserve the event";
		cout<<"\nThe deposit needed is:"<<deptamt;
		}
};

main()
{
   cost c;
   c.input1();
   c.cos();
}
