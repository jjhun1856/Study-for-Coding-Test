#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	
	int cnt = 0;
	int num = 666;
	while(1) {
		string str = to_string(num);
		if(str.find("666") != string::npos)
			cnt++;
		if(cnt == N) {
			cout << str << endl;
			return 0;
		}
		num++;
	}
	return 0;
}
