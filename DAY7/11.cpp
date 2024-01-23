#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("sample11.txt");//by default read mode, file should be there,will not create if file is not there .
	if(!file.is_open())
	{
		cout<<"error in opening the file"<<endl;
	}
	else
	{
		string line;
//		getline(file,line);
//		cout<<line<<endl;
		while(file.good())//allows to 
		{
			getline(file,line);
			cout<<line<<endl;
		}
		cout<<"succesfully read the contents from the file"<<endl;
	}
	return 0;
}
