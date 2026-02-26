#include<iostream>
using namespace std;
int main ()
{
	int subject1, subject2, subject3, subject4, total;
	float avg;
	//input
	cout <<"Enter subject1:";
	cin >>subject1;
	cout <<"Enter subject2:";
	cin >> subject2;
	cout <<"Enter subject3:";
	cin >>subject3;
	cout <<"Enter subject4:";
	cin >>subject4;
	cout <<"\n";
	//Total
	total=subject1 + subject2 + subject3 + subject4;
	cout <<"Total=" <<total << endl <<endl;
	//Average
	avg=total/4;
	cout <<"Average=" <<avg << endl <<endl;
	
	//conditions statements
	
	if((avg>=70) && (avg<=100)){
		cout << "Grade = A\n";
		cout << "Remarks : Excelent\n";
	}
	else if ((avg>=60) && (avg<=69)){
		cout << "Grade = B\n";
		cout << "Remarks : Good\n";
	}
	else if ((avg>=50) && (avg<=59)){
		cout << "Grade = C\n";
		cout << "Remarks : Satisfactory\n";
	}
	else if ((avg>=40) && (avg<=49)){
		cout << "Grade = D\n";
		cout << "Remarks : Pass\n";
	}
	else if ((avg>=0) && (avg<=39)){
		cout << "Grade = F\n";
		cout << "Remarks : Fail\n";
	}
	else{
		cout<<"Invalid marks\n";
	}
return 0;
}