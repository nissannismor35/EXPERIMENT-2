#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int x, y;
	double V;
	const double z = 2.5;
	
	cout << "Constant z= 2.5 \n";
	cout << "Please enter  a value for x: \n";
	cin >> x;
	cout << "Please enter a value for y: \n";
	cin >> y;
	
	switch (x)
	{
	
case 1: {
	if ( x == 1  && y > 1 && y < 5 ){
		V= x*y*z;
		cout << "V= " << y * z;
		cout << fixed;
		}
		
	else if ( x== 1 && y >= 5){
		V= x + (y/z);
		cout << "V= " << x + (y/z);
		cout << fixed;
		}
		
	
	else 
		cout << "Error!";
		break;
	}
	
case 2: {
	if ( x == 2 && y <= 5 ){
		V= abs((x - y)/z);
		cout << "V= " << abs((x - y)/z);
		cout << fixed;
		}
		
	else if ( x == 2 && y > 5){
		V=  x - sqrt(y + z);
		cout << "V= " << x - sqrt(y + z);
		cout << fixed;
	
}

	break;
}
case 3: {
	if ( x > 2){
		V= x + y + z;
		cout << "V= " << x + y + z;
		cout << fixed; 
	}
	break;
}

	_getch();
	return 0;
}}
