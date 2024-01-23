#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_number;
	public:
		void set_number(int);
		void get_number(void);
};
void student::set_number(int r)
{
	roll_number=r;
}
void student::get_number()
{
	cout<<"the roll number is "<<roll_number<<endl;
}



class exam:public student
{
	protected:
	float maths;//int roll_number
	float physics;
	public:
	void set_marks(float,float);//void set_number(int);
	void get_marks(void);//void get_number(void);
};
void exam::set_marks(float m1,float m2)
{
	maths=m1;
	physics=m2;
}
void exam::get_marks()
{
	cout<<"marks in physics is "<<physics<<endl;
	cout<<"marks in maths is "<<maths<<endl;
}



class result:public exam
{
	float percentage;
	//protected int roll_number,float maths,float physics
	public://void get_number(void); void set_number(int);
	//void set_marks(float,float); void get_marks(void);
		void display()
		{
			get_number();
			get_marks();
			cout<<"% is "<<(maths+physics)/2<<endl;
		}
};

int main()
{
	result abc;
	abc.set_number(420);
	abc.set_marks(94.0,90.0);
	abc.display();
	return 0;
}
