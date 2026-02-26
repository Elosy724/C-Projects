#include <iostream>
using namespace std;
int main(){
	int sale_volume;
	double commission, calc_commission;
	char agent_name[20];
	//Initialization
	cout <<"Enter Agent name:";
	cin >>agent_name;
	cout <<"Enter Sales volume:";
	cin >>sale_volume;

		//If statements
		if(sale_volume>=5000){
			commission = 0.15;
		}
		else if ((sale_volume>=4000) && (sale_volume<=4999)){
			commission = 0.12;
		}
		else if ((sale_volume>=3000) && (sale_volume<=3999)){
			commission = 0.09;
		}
		else if ((sale_volume>=2000) && (sale_volume<=2999)){
			commission = 0.06;
		}
		else if((sale_volume>=0) && (sale_volume<=1999)){
			commission = 0.03;
		}
		else{
			cout <<"Invalid sales volume\n";
		}
calc_commission = sale_volume * commission;
cout <<"Commission:"<<calc_commission<<endl;	
	return 0;
}