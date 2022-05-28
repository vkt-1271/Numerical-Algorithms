#include <iostream>
#define F(x) ((x*x*x)-x-11)
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
	int n;
	cout << "Enter no of Itreation: ";
	cin >> n;
	
	cout << "\nN \t Xn-1 \t\t F(Xn-1) \t Xn \t\t F(Xn) \t\t Xr \t\t F(Xr) \t\t Ea" << endl;
	for(int i=1;i<=n;i++)
	{
		printf("%d \t %.5f \t %.5f \t %.5f \t %.5f \t",i,a,F(a),b,F(b));
		float x = (a*F(b)-b*F(a))/(F(b)-F(a));
		if(i == 1)
			printf("%.5f \t %.5f \t -",x,F(x));
		else
			printf("%.5f \t %.5f \t %.5f",x,F(x),F(x)-e);
		e = F(x);
		a = b;
		b = x;
		
		cout << endl;
	}
	
}
