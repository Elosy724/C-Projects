#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int sale_volume;
	double commission, calc_commission;
	char agent_name[20];
	//initialization
	cout <<"Enter Agent name:";
	cin >>agent_name;
	cout <<"Enter Sales Volume:";
	cin >>sale_volume;
	
	//Switch case statements
	switch(sale_volume)
	{
	case 5000 ... 100000:
		commission = 0.15;
		break;
	case 4000 ... 4999:
		commission = 0.12;
		break;
	case 3000 ... 3999:
		commission = 0.09;
		break;
	case 2000 ... 2999:
		commission = 0.06;
		break;
	case 0 ... 1999:
		commission = 0.03;
		break;
	default:
		cout <<"Invalid sales volume input\n";
		break;
	}
calc_commission = sale_volume * commission;
cout <<"Commission:"<<calc_commission<<endl;
	
	return 0;
}