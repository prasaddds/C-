#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector <T>&v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
		cout<<v.at(i)<<" ";
	}
}
int main()
{
	vector<int> vec1;
	vector<char> vec2(4);//4 element vectr char
	vector<char> vec3(vec2);//4 element character vector from vec2
	vector<int> vec4(6,3);//6 element vector
	//display()
	int element;
	display(vec1);
	vector<int> :: iterator iter=vec1.begin();//iterator is pointing towards first element
	vec1.insert(iter,966);//inserts element at begin
	vec1.insert(iter+1,566);//insert element at begin+1
	vec1.insert(iter+1,5,2);//inserts 5 elements at second pos
	
	display(vec1);
	return 0;
}
