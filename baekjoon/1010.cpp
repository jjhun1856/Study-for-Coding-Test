#include <iostream>

using namespace std;

#define MAX 30

int p[MAX][MAX];

void preprocessing(void)
{
	for(int n=0; n<MAX; ++n)
	{
		for(int m=0; m<MAX; ++m)
		{
			if(n==m)
				p[n][m] = 1;
			else if(n>m || n==0 || m==0)
				p[n][m] = 0;
			else if(n==1)
				p[n][m] = m;
			else
				p[n][m] = p[n][m-1] + p[n-1][m-1];
		}
	}
		
}

int main(void)
{
	preprocessing();
	
	int num;
	cin >> num;

	for(int i=0; i<num; ++i)
	{
		int n, m;
		cin >> n >> m;
		
		cout << p[n][m] << endl;
	}
	return 0;
}
