#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double money,rate,pay;
	double interest = 0 ,total = 0;
	int years = 1;
	cout << "Enter initial loan: ";
	cin >> money;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

while(money>0){
	interest = money*rate/100;
	total = money + interest;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << years; 
	cout << setw(13) << left <<money;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	if(total <= pay){
		pay = total;
		money = total-total;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << money;
		break;
	}
	
	cout << setw(13) << left << pay;
	money = total - pay;
	cout << setw(13) << left << money;
	cout << "\n";
	years++;
	
}
}