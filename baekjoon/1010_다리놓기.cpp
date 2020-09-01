// 백준 1010번 다리 놓기 
// combination 활용 


#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int T; // 테스트 케이스 
	int N, M; // 서쪽, 동쪽 사이트 개수
	
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
