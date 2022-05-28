#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter no. of data: ";
	cin >> n;
	
	float x[n+1][n] = {0};
	cout << "Enter x & F(x): " << endl;
	for(int i=0;i<n;i++)
	{
		cin >> x[0][i] >> x[1][i];
	}
	float x1;
	cout << "Enter value to find: ";
	cin >> x1;
	
	float h = x[0][1] - x[0][0];
	float k = h;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			x[i+2][j] = (x[i+1][j+1] - x[i+1][j])/h;
		}
		h += k;
	}
	cout << endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(x[j][i] == 0)
				break;
			printf("%.5f\t\t",x[j][i]);
		}
		cout << endl;
	}
	float a = x[1][0];
	for(int i=2;i<n+1;i++)
	{
		float b = x[i][0];
		for(int j=1;j<i;j++)
		{
			b = b*(x1-x[0][j-1]);
		}
		a += b;
	}
	printf("\n\nF(%.2f)= %.5f",x1,a);
	
}
