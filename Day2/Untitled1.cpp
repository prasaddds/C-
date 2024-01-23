#include<iostream>
using namespace std;
int main(){
	int enterNumber;
	cout<<"Enter a number"<<endl;
	cin>>enterNumber;
	int count=0;
	while(enterNumber>0){
		enterNumber=enterNumber/10;
		count++;
	}
	cout<<count<<endl;
}
