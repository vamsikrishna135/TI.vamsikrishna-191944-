#include<iostream>
using namespace std;
class student
{
	int roll_no;
	int yearofjoining ;
	int CGPA;
	public:
		student(int a,int b,int c);
		void display();
};
student ::student(int a,int b,int c)
{
	roll_no=a;
	yearofjoining=b;
	CGPA=c;
}
void student::display()
{
	cout<<"the roll_no of student is "<<roll_no<<endl;
	cout<<"the yearof joining of student is "<<yearofjoining<<endl;
	cout<<"the overall CGPA of student is "<<CGPA<<endl;
}
int main()
{
	student s(191944,2019,9);
	s.display();
	return 0;
}
