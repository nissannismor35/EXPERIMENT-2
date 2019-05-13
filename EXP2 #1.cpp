#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int Hours, Package;
	
	
	cout << "Welcome to UST Internet Services! \n" << endl;
	cout << "Enter amount of hours used in a month: ";
	cin >> Hours;
	cout << "\n";
	
	cout << "Choose your desired package below: \n";

	cout << "{1} P995/mo 10 hrs of access are provided. Additional hours are P20/hr \n";
	cout << "{2} P1495/mo 20 hrs of access are provided. Additional hours are P10/hr \n";
	cout << "{3} P1995/mo of unlimited access is provided \n";
	cout << "\n";
	cout << "Choose Desired Package : 1, 2, 3 \n";
	cin >> Package;
	cout << "\n";
	
	if (Package == 1 && Hours <= 10)
	cout << "Total Bill: P 995";
	
	else if (Package == 1 && Hours > 10)
	cout << "Total Bill: P " << 995 + (20 * (Hours - 10)) << endl;
	
	else if (Package == 2 && Hours <= 20)
	cout << "Total Bill: P1495";
	
	else if (Package == 2 && Hours > 20)
	cout << "Total Bill: P " << 1495 + (10 * (Hours-20));
	
	else if (Package == 3)
	cout << "Total Bill: P1995" <<endl;
	
	else  
	cout << "Please choose from Package 1, 2, or 3 only :)";
	
	cout << "Thank you for choosing UST Internet Services!";
_getch(); 
return 0;
}
