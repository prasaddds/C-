#include<iostream>
using namespace std;
class Empl1{
	string s1;
	public:
		void check();
};
void Empl1::check(){
	cout<<"Enter string"<<endl;
	getline(cin,s1);
	for(int i=0;i<s1.length();i++){
		if(s1.at(i)!='0'){
			cout<<"Wrong format"<<endl;
			exit(0);
		}
	}
}
int main(){
	Empl1 obj;
	obj.check();
}

