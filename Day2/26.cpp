#include <bits/stdc++.h>
using namespace std;

// Defining enum Year
enum year {
	Jan=15,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Oct,
	Nov,
	Dec
};

// Driver Code
int main()
{

	// Traversing the year enum
	for (int i = Jan; i <= Dec; i++)
		cout << i << " ";

	return 0;
}

