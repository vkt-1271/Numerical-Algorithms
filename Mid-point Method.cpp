#include <iostream>
#define F(x,y) (y-(x*x)+1)
//X=0, Y=0.5 , H=0.2 , X1=2
using namespace std;
int main()
{
	float x,x1,y,h;
	cout<<"Enter Value of X(limits) , Y , and H: ";
	cin>>x>>x1>>y>>h;
	
	for(int i=1;x<=x1;i++)
	{
		float k=F(x,y);
		float k1=F((x+(h/2)),(y+((h/2)*k)));
		y=y+(h*k1);
		
		printf("Y(%d)= %.5f\n",i,y);
		x+=h;	
	}
}
