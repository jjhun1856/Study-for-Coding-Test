#include <iostream>
#include <vector>

using namespace std;

void process(vector< vector<int> >& field, int M, int N, int m, int n)
{
	field[m][n] = -1;
	
	if(0 <= m+1 && m+1 < M && field[m+1][n] == 1)
		process(field, M, N, m+1, n);
	if(0 <= m-1 && m-1 < M && field[m-1][n] == 1)
		process(field, M, N, m-1, n);
	if(0 <= n+1 && n+1 < N && field[m][n+1] == 1)
		process(field, M, N, m, n+1);
	if(0 <= n-1 && n-1 < N && field[m][n-1] == 1)
		process(field, M, N, m, n-1);
}

int main(void)
{
	int test;
	cin >> test;
	
	for(int t=0; t<test; ++t)
	{
		int M, N, K;
		cin >> M >> N >> K;
		
		vector< vector<int> > field(M, vector<int>(N, 0));
		
		for(int i=0; i<K; ++i)
		{
			int m, n;
			cin >> m >> n;
			
			field[m][n] = 1;
		} 
		
		int cnt = 0;
		for(int i=0; i<M; ++i)
		{
			for(int j=0; j<N; ++j)
			{
				if(field[i][j] == 1)
				{
					cnt++;
					process(field, M, N, i, j);
				}
			}
		}
		
		cout << cnt << endl;
	}
	
	
	return 0;
}
