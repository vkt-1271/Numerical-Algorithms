#include <bits/stdc++.h>
#define F(x) (1/(x*x))
using namespace std;
int main()
{
	float x,x1,h,n;
	cout<<"Input Upper and Lower Limit and Number of Terms: ";
	cin>>x1>>x>>n;
	
	cout<<endl;
	h=(x1-x)/n;
	
	float trap=(F(x)+F(x1));
	printf("%.5f\t%.5f\n",x,F(x));
	for(int i=0;i<n-1;i++)
	{
		x+=h;
		trap+=2*(F(x));
		printf("%.5f\t%.5f\n",x,F(x));
	}
	printf("%.5f\t%.5f\n",x1,F(x1));
	cout<<"\nAnswer= "<<((h/2)*trap)<<" ";	
}
