// ���� 1010�� �ٸ� ���� 
// combination Ȱ�� 


#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int T; // �׽�Ʈ ���̽� 
	int N, M; // ����, ���� ����Ʈ ����
	
	vector<int> answer;
	
	cin >> T;
	
	for(int i=0; i<T; ++i) {
		cin >> N >> M;
		
		long long tmp = 1;
		
		for(int j=0; j<N; ++j)
			tmp *= M-j;
		for(int j=1; j<=N; ++j)
			tmp /= j;
		
		answer.push_back(tmp);
	}
	 
	for(int i=0; i<answer.size(); ++i)
		cout << answer[i] << endl;
		
	return 0;
}
