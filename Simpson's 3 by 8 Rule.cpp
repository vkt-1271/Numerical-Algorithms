#include <bits/stdc++.h>
#define F(x) ((x*x*x)+(x*x))
using namespace std;
int main()
{
	float x,x1,h;int n,a=3,c=0;
	cout<<"Input Upper and Lower Limit and Number of Terms: ";
	cin>>x1>>x>>n;
	
	if(n<3)
	{
		cout<<"Minimum Four Terms are Required";
		exit(0);
	}
	if(n==3)
		c=1;
	else
	{
		while(1)
		{
			a+=3;
			if(a==n)
			{
				c=1;
				break;
			}
			if(a<n)
				continue;
			else
			{
				c=0;
				a-=3;
				break;
			}
		}
	}
	cout<<endl;
	h=(x1-x)/(float)n;
	
	float simpson=F(x);
	printf("%.5f\t%.5f\n",x,F(x));
	for(int i=0,j=0;i<a-1;i++,j++)
	{
		x+=h;
		if(j<2)
			simpson+=(3*(F(x)));
		else
		{
			simpson+=(2*(F(x)));
			j = -1;
		}
		printf("%.5f\t%.5f\n",x,F(x));
	}
	x+=h;
	simpson+=F(x);
	simpson=(((3*h)/8)*simpson);
	printf("%.5f\t%.5f\n",x,F(x));
	if(c==0)
	{
		if(a+1 == n)
			simpson+=F(x1);
		else
		{
			x+=h;
			simpson+=((2*(F(x)))+F(x1));
			printf("%.5f\t%.5f\n",x,F(x));	
		}
		simpson*=(h/2);
		printf("%.5f\t%.5f\n",x1,F(x1));
	}
	cout<<"\nAnswer= "<<simpson<<" ";	
}
