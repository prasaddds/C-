#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	char input[100];
	strcpy(input,"learning lad rocxks");
	fstream file("sample16.bin",ios::binary | ios::in |ios::out | ios::trunc);
	if(!file.is_open())
	{
		cout<<"error";
	}
	else
	{
		int length=strlen(input);
		for(int i=0;i<=length;i++)
		{
			file.put(input[i]);
		}
		file.seekg(0);
		char ch;
		while(file.good())
		{
			file.get(ch);
			cout<<ch;
		}
		return 0;
	}
}
