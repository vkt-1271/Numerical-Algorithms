#include <iostream>
#define F(x,y) ((-2*x*x*x)+(12*x*x)-20*x+8.5)
using namespace std;

int main()
{
	float x,x1,y,h;
	cout << "Enter x limits, y & h: ";
	cin >> x >> x1 >> y >> h;
	cout << endl;
	for(int i=1;x <= x1;i++)
	{
		y = y + h*F(x,y);
		printf("\nY(%d)= %0.5f",i,y);
		x += h;
	}
}
