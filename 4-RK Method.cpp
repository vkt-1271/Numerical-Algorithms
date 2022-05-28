#include <bits/stdc++.h>
#define F(x,y) (y-(x*x)+1)
//X=0, Y=0.5 , H=0.2 , N=10
using namespace std;
int main()
{
	float x,h,y;
	cout<<"Enter Value of X , Y , and H: ";
	cin>>x>>y>>h;
	
	float k1,k2,k3,k4;
	
	int n;
	cout<<"Enter Value of n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		k1=h*F(x,y);
		k2=h*F((x+(h/2)),(y+(k1/2)));
		k3=h*F((x+(h/2)),(y+(k2/2)));
		x+=h;
		k4=h*F(x,y+k3);

		y=y+((k1+2*k2+2*k3+k4)/6);
		printf("Y(%d)= %.5f\n",i,y);	
	}
}
