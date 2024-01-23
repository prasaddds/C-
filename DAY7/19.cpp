//templates:-parameterized classes,DRY,generic program,
/*
syntax:-
template <class T>
class vector
{
	T * arr;
	public:
		vector(T *ar)
		{
			//code
		}
		..other methods
}
int main()
{
	vector<int> myvec(ptr);
	vector<int> myfwef(ptr);
}

*/
#include <iostream>
using namespace std;
 
class vector
{
    public:
        int *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new int[size];
        }
    int dotProduct(vector &v){
        int d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
                //4 3 1       1 0 1
        }
        return d;
    }
};
 
int main()
{
    vector v1(3); //vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector v2(3); //vector 2
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}
//will not give correct result for float

