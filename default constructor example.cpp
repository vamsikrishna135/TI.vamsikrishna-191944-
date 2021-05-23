#include<iostream>
using namespace std;
class student
{
	int roll_no;
	int yearofjoining;
	int CGPA;
	public:
		student(int a=19894,int b=2019,int c=10);
		void display();
};
student::student(int a,int b,int c)
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
	student s;
	s.display();
	return 0;
}
