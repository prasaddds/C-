#include<iostream>
using namespace std;
int main(){
	int arr[]={5,6,10,8,9};
	int n=5;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
	}
	//5 6 8 9 10
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<min<<endl;
	for(int i=0;i<n;i++){
		if(arr[i]==min){
			min=min+1;
			continue;
		}
		else{
			cout<<min;
			break;
		}
	}
}
