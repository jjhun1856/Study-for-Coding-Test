#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	vector<string> files(n);
	for(int i=0; i<n; ++i)
	{
		cin >> files[i];
	} 
	
	string answer = "";
	int length = files[0].size();
	for(int i=0; i<length; ++i)
	{
		int j;
		char ch = files[0][i];
		for(j=1; j<n && !(ch != files[j][i]); ++j)
			;
		if(j<n)
			ch = '?';
		answer += ch;
	}
	cout << answer << endl;
	
	return 0;
}
