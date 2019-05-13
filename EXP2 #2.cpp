#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
	double recentBill, unpaidBal; 
	int gal;
	
	cout << "Notice:" <<endl;
	cout << "P35 - Water Demand" << endl;
	cout << "P1.10 - Consumption Charge per Gallon" << endl;
	cout << "P20 - Past due date" <<endl;
	
	cout << "\n";
	cout << "Enter number of Gallons used the recent month: ";
	cin >> gal;
	
	recentBill = 35 + (1.10 * gal);
	cout << "Recent Bill: P" << recentBill <<endl;
	
	cout << "Any unpaid balances, ma'am/ sir? Please enter the amount if there is any: P ";
	cin >> unpaidBal;
	
	cout << "\n";
	cout << "\n";
	
	if (unpaidBal > 0)
	cout << "Total Balance: P " << recentBill + unpaidBal + 20;
	
	else if (unpaidBal == 0)
	cout << "Total Balance: P " << recentBill;
	cout << "\n";
	cout << "\n";
	cout << "Avoid paying past the due date to prevent penalty charges! :)";
	_getch();
	return 0; 
}
