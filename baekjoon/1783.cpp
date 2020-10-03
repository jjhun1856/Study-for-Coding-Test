#include <iostream>

using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	
	if(N == 1)
		cout << 1 << endl;
	else if(N == 2) 
		cout << ((4 > (M+1)/2) ? (M+1)/2 : 4) << endl;
	else if(M < 7)
		cout << ((4 > M) ? M : 4) << endl;
	else 
		cout << M - 7 + 5 << endl;		
	return 0;
}
