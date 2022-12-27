#include<iostream>
using namespace std;

class input
{
public:
int a,c,b;
void operators()
{
here:
cout<<"----------MENU----------\n\n";
cout<<"\t1.Addition\n";
cout<<"\t2.Subtraction\n";
cout<<"\t3.Multipliction\n";
cout<<"\t4.Division\n";
cout<<"\t5.Module\n";
cout<<"\t6.Exit\n\n\n";

cout<<"Enter Your Choice From MENU:  ";
cin>>a;
}
};

class sum : public input
{
public:
void sumall()
{
if (a==1)
{
cout<<"Enter Two number for addition:";
cin>>b>>c;
b=b+c;
cout<<"Addition:"<<b;
}
if (a==2)
{
cout<<"Enter Two number for Subtraction:";
cin>>b>>c;
b=b-c;
cout<<"Subtraction:"<<b;
}
if (a==3)
{
cout<<"Enter Two number for Multiplication:";
cin>>b>>c;
b=b*c;
cout<<"Multiplication:"<<b;
}
if (a==4)
{
cout<<"Enter Two number for Division:";
cin>>b>>c;
b=b/c;
cout<<"Division:"<<b;
}
if (a==5)
{
cout<<"Enter Two number for Module:";
cin>>b>>c;
b=b%c;
cout<<"Module:"<<b;
}

else
{
printf("\nExit");
}
}
};
main()
{
	sum s;
	s.operators();
	s.sumall();
}
