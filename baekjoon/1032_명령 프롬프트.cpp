// 문자 하나하나 돌면서 같으면 해당 문자 넣고, 다르면 ? 삽입 

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N; // 파일 이름 개수
	int len; // 문자열 길이
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
