#include <bits/stdc++.h>
#define F(x) (1/(x*x))
using namespace std;
int main()
{
	float x,x1,h;int n;
	cout<<"Input Upper and Lower Limit and Number of Terms: ";
	cin>>x1>>x>>n;
	
	if(n<3)
	{
		cout<<"Minimum Four Terms are Required";
		exit(0);
	}
	
	cout<<endl;
	h=(x1-x)/(float)n;
	
	float simpson=F(x);
	printf("%.5f\t%.5f\n",x,F(x));
	for(int i=0,j=0;i<n-1;i++,j++)
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
	
	cout<<"\nAnswer= "<<simpson<<" ";	
}
