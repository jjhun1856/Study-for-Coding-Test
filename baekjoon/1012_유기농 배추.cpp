// 시간, 메모리 중 시간을 절약하기로 함 

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int T; // 테스트 케이스 개수
	int M, N; // 배추밭의 가로길이, 세로길이
	int K; // 배추가 심어져 있는 위치의 개수 
	int X, Y; // 배추의 위치 
	
	vector<int> worms;
	cin >> T;
	
	for(int i=0; i<T; ++i) {
		cin >> M >> N >> K;
		
		vector< vector<int> > soil(N+1, vector<int>(M+1, 0));
		int worm = 0;
		
		for(int j=0; j<K; ++j) {
			cin >> Y >> X;
			soil[X+1][Y+1] = 1;
		}
	
		for(int j=1; j<N+1; ++j) {
			for(int k=1; k<M+1; ++k) {
				if(soil[j][k]==1 && soil[j-1][k]!=1 && soil[j][k-1]!=1) {
					worm += 1;
				}
			}
		}
		worms.push_back(worm);
		
		soil.clear();
	}
	
	for(int i=0; i<worms.size(); ++i) {
		cout << worms[i] << endl;
	}
	
	return 0;
}
