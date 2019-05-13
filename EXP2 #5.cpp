#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>

using namespace std;
int main()
{
	int a,b,c,d;
	b=0;
	c=1;
	for (a=0;a<=22;a++)
	{ if (a <=1)
	d =a;
	else if (a==21)
	continue;
	else {
		d = b + c;
		b = c;
		c = d;
		
		cout << d << ",";
		
	}
	}
	_getch();
	return 0;
	}

