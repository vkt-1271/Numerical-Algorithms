#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
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
	float p = (x1-x[0][n-1])/(x[0][1]-x[0][0]);
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			x[i+2][j] = x[i+1][j+1] - x[i+1][j];
		}
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
	float a = x[1][n-1];
	for(int i=2;i<n+1;i++)
	{
		float b = p*x[i][n-i];
		for(int j=1;j<i-1;j++)
		{
			b = b*(p+j);
		}
		a += b/(float) factorial(i-1);
	}
	printf("\n\nP= %.5f",p);
	printf("\n\nF(%.2f)= %.5f",x1,a);
}
