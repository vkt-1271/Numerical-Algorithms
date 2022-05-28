#include <iostream>
#define F(x) (1/(x*x))
using namespace std;
int main()
{
	float x,x1,h;
	int n;
	cout<<"Input Upper and Lower Limit and Number of Terms: ";
	cin>>x1>>x>>n;
	
	if(n<2)
	{
		cout<<"Minimum Three Terms are Required";
		exit(0);
	}
	cout<<endl;int c=0;
	h=(x1-x)/(float)n;
	
	float simp=F(x);
	printf("%.5f\t%.5f\n",x,F(x));
	if(n%2!=0)
	{
		n-=1;
		c=1;
	}
		
	for(int i=0;i<n-1;i++)
	{
		x+=h;
		if(i%2!=0)
			simp+=2*(F(x));
		else
			simp+=4*(F(x));
		
		printf("%.5f\t%.5f\n",x,F(x));
	}
	
	x+=h;
	simp+=F(x);
	simp=((h/3)*simp);
	printf("%.5f\t%.5f\n",x,F(x));
	if(c==1)
	{
		simp+=F(x1);	
		printf("%.5f\t%.5f\n",x1,F(x1));
	}
	cout<<"\nAnswer= "<<simp<<" ";	
}
