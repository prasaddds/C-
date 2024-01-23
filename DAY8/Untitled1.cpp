
#include <bits/stdc++.h>
using namespace std;
int main()
{
int p;
cin>>p;
int arr[p]={0};
for(int i=0;i<p;i++)
cin>>arr[i];
int nn = sizeof(arr) / sizeof(arr[0]);
int res = 0;
int m,n;
cin>>m>>n;

for (int i = 0; i < nn; i++)
{
	int sum = 0;
	for (int j = i; j < nn; j++)
	{
	sum += arr[j];
	if (sum == n)
		res++;
	}
}
cout << (res+1) << endl;
}

