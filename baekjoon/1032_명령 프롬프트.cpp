// ���� �ϳ��ϳ� ���鼭 ������ �ش� ���� �ְ�, �ٸ��� ? ���� 

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N; // ���� �̸� ����
	int len; // ���ڿ� ����
	vector<string> output;
	
	cin >> N;
	
	string tmp;
	for(int i=0; i<N; ++i) {
		cin >> tmp;
		output.push_back(tmp);
	} 
	
	len = tmp.length(); 
	vector<char> sameChar;
	
	for(int i=0; i<len; ++i) {
		bool isSame = true;
		for(int j=1; j<N&&isSame; ++j) {
			if(output[j-1][i]!=output[j][i])
				isSame = false;
		}
		if(isSame) {
			sameChar.push_back(output[0][i]);
		} else {
			sameChar.push_back('?');
		}
	}
	
	for(int i=0; i<sameChar.size(); ++i) {
		cout << sameChar[i];
	}

	
	return 0;
}
