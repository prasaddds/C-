#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
/*
istream:-cread(char *buf,streamsize num);
ostream:-cwrite(const char *buf,streamsize num);
*/
class person
{
	char name[60];
	int age;
	public:
		person()
		{
			strcpy(name,"noname");
			age=0;
		}
		person(char *name,int age)
		{
			strcpy(this->name,name);
			this->age=age;
		}
		void whoareyou()
		{
			cout<<"Hii, i am"<<" "<<name<<" "<<age<<endl;
		}
		void change()
		{
			strcpy(this->name,"xxxx");
			age=100;			
		}
};
int main()
{
	person obj("asd",18);
	fstream file("person.bin",ios::binary | ios::in | ios::out | ios::trunc);
	if(!file.is_open())
	{
		cout<<"error"<<endl;
	}
	else
	{
		file.write((char *)&obj,sizeof(person));
		file.seekg(0);
		person obj2;
		file.read((char *)&obj2,sizeof(person));
		obj.whoareyou();
		obj2.whoareyou();
		
		obj.change();
		obj.whoareyou();
		obj2.whoareyou();
	}
}
/*
not sharing same copy
*/
