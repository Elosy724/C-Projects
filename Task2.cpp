#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int marks;
	cout <<"Enter marks:";
	cin >>marks;
	
	//Switchcase
	
	switch(marks)
	{
	case 70 ... 100:
		cout <<"Grade = 'A'\n";
		cout <<"Remarks : Excellent\n";
		break;
	case 60 ... 69:
		cout <<"Grade = 'B'\n";
		cout <<"Remarks : Good\n";
		break;
	case 50 ... 59:
		cout <<"Grade = 'C'\n";
		cout <<"Remarks : Satisfactory\n";
		break;
	case 40 ... 49:
		cout <<"Grade = 'D'\n";
		cout <<"Remarks = Pass\n";
		break;
	case 0 ... 39:
		cout <<"Grade = 'F'\n";
		cout <<"Remarks : Fail\n";
		break;
	default:
		cout <<"Invalid marks\n";
		break;
	}
	return 0;
}