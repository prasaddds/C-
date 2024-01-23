#include<iostream>
using namespace std;

struct example{//tag name
	int marks1;
	int marks2;
	void marks(){
		cout<<"marks are "<<marks1<<" "<<marks2<<endl;
	}
} abc;//structure variable
int main(){
	struct example a1,a2;
	a1.marks1=20;
	a1.marks2=25;
	a1.marks();
	a2.marks1=25;
	a2.marks();
	abc.marks1=20;
	abc.marks();
	a1={5,10};
	return 0;
	
}

