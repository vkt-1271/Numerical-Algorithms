#include <iostream>
#include <math.h>
#define F(x) ((x*x*x)+(x*x))
using namespace std;

bool check(float s,float t)
{
	if(s*t < 0)
		return true;
	return false;
}

int main()
{
	float a,b,e=0;
	cout << "Enter value of a&b: ";
	cin >> a >> b;
	
	float s = F(a);
	float t = F(b);
	if(!check(s,t))
	{
		cout << "Not following intermediate value theorem!" << endl;
		exit(0);
	}
	int n,c=0;
	if(s<0)
		c=1;
	cout << "Enter no of Itreation: ";
	cin >> n;
	
	cout << "\nN \t a \t\t F(a) \t\t b \t\t F(b) \t\t Xr \t\t F(Xr) \t\t Ea" << endl;
	for(int i=1;i<=n;i++)
	{
		printf("%d \t %.5f \t %.5f \t %.5f \t %.5f \t",i,a,F(a),b,F(b));
		float x = (a+b)/2;
		if(i == 1)
			printf("%.5f \t %.5f \t -",x,F(x));
		else
			printf("%.5f \t %.5f \t %.5f",x,F(x),F(x)-e);
		e = F(x);
		
		if(e < 0)
		{
			if(c == 1)
				a = x;
			else
				b = x;
		}
		else
		{
			if(c == 1)
				b = x;
			else
				a = x;
		}
		cout << endl;
	}
	
}
