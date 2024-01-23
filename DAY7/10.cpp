
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("sample10.txt");//opens in write mode.creating if file is not there
	if(!file.is_open())
	{
		cout<<"unable to open the file"<<endl;
	}
	else
	{
		file<<"Hello mr"<<endl;
		file<<"Hello mrs"<<endl;//every time we run this program previous content will be removed and newly it will be written
		file.close();
		cout<<"successfully opened and written"<<endl;
	}
	return 0;
}
